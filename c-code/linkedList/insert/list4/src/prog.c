#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ListNode{
    int  value;
    struct ListNode*  next;
};

struct List {
    int size;
    struct ListNode*  head;
};
void newList(struct List **_out) ;
void reverse(struct List **l);
void addFirst(struct List **l, int val);
void newNode(int v, struct ListNode **_out);
void insertSort(struct ListNode** head, struct ListNode** in);

void newList(struct List** l) {
    *l = malloc( sizeof(struct List)  );
    (*l)->head = NULL;
    return;
}

void newNode(int v, struct ListNode **n){
    *n = malloc(sizeof(struct ListNode));
    (*n)->value = v;
    (*n)->next = NULL;
}


void addFirst(struct List** l, int val) {
    struct ListNode* n ;
    newNode(val, &n);
    n->next = (*l)->head;
    (*l)->head = n;
    return;
}

void  insertSort (struct ListNode** head, struct ListNode** in) {
    if ((*head) == NULL) {
        (*in)->next = NULL;
        *head = *in;
        return;
    }
    if ((*in)->value < (*head)->value) {
        (*in)->next = (*head);
        *head = *in;
        return ;
    }

    struct ListNode* cur = (*head);
    while (cur->next != NULL) {
        if ((*in)->value < cur->next->value)
            break;
        cur = cur->next;
    }
    (*in)->next = cur->next;
    cur->next = (*in);
    (*head) = *in;
}


int main(int argc, char *argv[]) {
    if (argc<2) return 0;
    FILE *f = fopen(argv[1],"r");
    if (f==NULL) return 0;
    struct List *l;
    newList(&l);
    char x[20];
    struct ListNode* node;
    while (fscanf(f,"%s",x)==1) {
        if (x[0] != '"') {
            newNode(atoi(x),&node);
            insertSort(&(l->head),&node);
        }
    }
    fclose(f);

    node = l->head;
    while (node!=NULL) {
        printf("%d ",node->value);
        node = node->next;
    }
    return 0;


}
