#include <stdio.h>
#include <stdlib.h>
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
void newNode(struct Entry ** out);
void insertSort(struct List** l, int v);

void newList(struct List** l) {
    *l = malloc( sizeof(struct List) );
    newNode(&((*l)->head));
    (*l)->head->next = (*l)->head;
    return;
}


void newNode( struct Entry** n){
    *n = malloc(sizeof(struct Entry));
    // (*n)->element = v;
     (*n)->next = NULL;
}


void insertSort (struct List** l, int v) {
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
    struct Entry*  ln1 = (*l)->head->next;
    struct Entry*  ln2 = (*l)->head->next->next;
    struct Entry*  ln3 = (*l)->head;
    struct Entry*  ln4 = NULL;
    while (ln2 != NULL) {
        ln4 = ln2->next;
        ln1->next = ln3;
        ln3 = ln1;
        ln1 = ln2;
        ln2 = ln4;
    }
    (*l)->head = ln1;
   // ln1->next = ln3;
}



int main(int argc, char *argv[]) {
    if (argc<2) return 0;
    FILE *f = fopen(argv[1],"r");
    if (f==NULL) return 0;
    struct List *l;
    newList(&l);
    char x[20];
    while (fscanf(f,"%s",x)==1) {
        if (x[0] != '"')
        insertSort(&l,atoi(x));
    }
    fclose(f);
    reverse(&l);
    struct Entry* node = l->head->next;
    while (node!= l->head ) {
        printf("%d ",node->element);
        node = node->next;
    }
    return 0;


}
