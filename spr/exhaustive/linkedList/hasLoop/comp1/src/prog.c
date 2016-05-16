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
    (*n)->next = NULL;
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

int hasLoop(struct List* l) {
    if (l->head->next == l->head)
        return 1;
    struct Entry* ln1 = l->head;
    struct Entry* ln2 = l->head;
    int count=0;
    while (count <100) {
    //    if (ln1->next == l->head)
    //        return 1;
    //    else
        ln1 = ln1->next;
        if (ln2->next == l->head || ln2->next->next == l->head)
            return 1;
        else
            ln2 = ln2->next->next;
   //     if (ln1==ln2)
    //        return 0;
        count = count+1;
    }
    exit(1);
}


int main(int argc, char *argv[]) {
    if (argc<2) return 0;
    FILE *f = fopen(argv[1],"r");
    if (f==NULL) return 0;
    struct List *l;
    newList(&l);
    char x[20];
    struct Entry* node;
    struct Entry* n1 ;
    newNode(&n1);
    struct Entry* n2 ;
    newNode(&n2);
    struct Entry* n3 ;
    newNode(&n3);
    struct Entry* n4 ;
    newNode(&n4);
    int status = 0;
    struct Entry* e = l->head;
    while (fscanf(f,"%s",x)==1) {
        if (x[0] == '"')
            continue;
        if (strcmp(x,"N1")==0)
            node = n1;
        if (strcmp(x,"N2")==0)
            node = n2;
        if (strcmp(x,"N3")==0)
            node = n3;
        if (strcmp(x,"N4")==0)
            node = n4;
        if (strcmp(x,"H")==0)
            node = l->head;
        e->next = node;
        e = e->next;
    }
    fclose(f);

    printf(" %d",hasLoop(l));
    return 0;


}
