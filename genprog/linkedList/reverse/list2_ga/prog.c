#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Entry{
    int  element;
    struct Entry*  next;
};

struct List {
    int size;
    struct Entry*  head;
};
void newList(struct List **_out) ;
void reverse(struct List **l);
void newNode(struct Entry** out);
void insertSort(struct List** l, int v);
int hasLoop(struct List *l);

void newList(struct List** l) {
    *l = malloc( sizeof(struct List)  );
    newNode(&((*l)->head));
    (*l)->head->next = (*l)->head;
    return;
}

void newNode( struct Entry** n){
    *n = malloc(sizeof(struct Entry));
    //    (*n)->element = v;
    (*n)->next = (void*) 0;
}

void  insertSort (struct List** l, int v) {
    struct Entry* in;
    newNode(&in);
    in->element = v;
    struct Entry* e = (*l)->head;
    while ( e->next != (*l)->head) {
        if (e->next->element < v)
            e = e->next;
        else
            break;
    }
    in->next = e->next;
    e->next = in;
    (*l)->size = (*l)->size + 1;
}


void reverse(struct List** l) {
    if ((*l)->head->next == (*l)->head) {
        return;
    }
    struct Entry* ln1 = (*l)->head->next;
    struct Entry* ln2 = (*l)->head->next->next;
    struct Entry* ln3 = (*l)->head;
    struct Entry* ln4 = (void*) 0;
    while (ln2 != (*l)->head ) {
        ln4 = ln2->next;
        ln1->next = ln3;
        ln3 = ln1;
        ln1 = ln2;
        ln2 = ln4;
    }
   // (*l)->head->next = ln1;
     ln1->next = ln3;
}


int main(int argc, char *argv[]) {
    if (argc<2) return 0;
    struct List *l;
    newList(&l);
    char* x = argv[1];
    char* tmp ;
    tmp = strtok(x," ");
    struct Entry* node;
    while (tmp != (void*) 0) {
        if (tmp[0] == '"') continue;
        insertSort(&l,atoi(tmp));
        tmp = strtok((void*) 0, " ");
    }
    reverse(&l);
    node = l->head;
    while (node->next != l->head) {
        printf("%d ",node->next->element);
        node = node->next;
    }
    printf(" %d",l->size);
    return 0;


}


