#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Entry{
    char*  element;
    struct Entry*  next;
    struct Entry* previous;
};

struct List {
    int size;
    struct Entry*  head;
};
void newList(struct List **_out) ;
void addFirst(struct List **l, struct Entry** n);
void addLast(struct List **l, struct Entry** n);
void newNode(struct Entry **_out);

int hasLoopNext(struct List* l) ;
int hasLoopNext(struct List* l) ;


void newList(struct List** l) {
    *l = malloc( sizeof(struct List)  );
    struct Entry* h;
    newNode(&h);
    (*l)->head = h;
    (*l)->head->element = "H";
    (*l)->head->next = (*l)->head;
    (*l)->head->previous = (*l)->head;
    (*l)->size = 0;
    return;
}

void newNode( struct Entry **n){
    *n = malloc(sizeof(struct Entry));
    // (*n)->element = v;
    (*n)->next = NULL;
    (*n)->previous = NULL;
}

void addFirst(struct List** l, struct Entry** e) {
    //    struct Entry* t = (*l)->head->next;
    (*e)->previous = (*l)->head;
    (*e)->next = (*l)->head->next;
    (*e)->next->previous = *e;
    (*e)->previous->next = *e;
    // t->previous = e;
    (*l)->size = (*l)->size +1;
    return;
}

void addLast(struct List** l, struct Entry** e) {
    //    struct Entry* t = (*l)->head->next;
    (*e)->previous = (*l)->head->previous;
    (*e)->next = (*l)->head;
    (*e)->next->previous = *e;
    (*e)->previous->next = *e;
    // t->previous = e;
    (*l)->size = (*l)->size +1;
    return;
}


int hasLoopNext(struct List* l) {
    if (l->head->next == l->head)
        return 1;
    struct Entry* ln1 = l->head;
    struct Entry* ln2 = l->head;
    while (1) {
        if (ln1->next == l->head)
            return 1;
        else
            ln1 = ln1->next;
        if (ln2->next == l->head || ln2->next->next == l->head)
            return 1;
        else
            ln2 = ln2->next->next;
        if (ln1==ln2)
            return 0;
    }
    return 1;
}


int hasLoopPrev(struct List* l) {
    if (l->head->previous == l->head)
        return 1;
    struct Entry* ln1 = l->head;
    struct Entry* ln2 = l->head;
    while (1) {
        if (ln1->previous == l->head)
            return 1;
        else
            ln1 = ln1->previous;
        if (ln2->previous == l->head || ln2->previous->previous == l->head)
            return 1;
        else
            ln2 = ln2->previous->previous;
        if (ln1==ln2)
            return 0;
    }
    return 1;
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
     n1->element = "N1";
     struct Entry* n2 ;
    newNode(&n2);
    n2->element = "N2";
     struct Entry* n3 ;
     newNode(&n3);
     n3->element = "N3";
     struct Entry* n4 ;
     newNode(&n4);
     n4->element = "N4";
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
         addLast(&l,&node);
     }
    fclose(f);

    if (hasLoopNext(l)==0  ){
        printf("%s","HAS LOOP");
        return 0;
    }

    if (hasLoopPrev(l)==0  ){
        printf("%s","HAS LOOP");
        return 0;
    }

    struct Entry* n = l->head->next;
    while (n != (l->head)) {
        printf("%s ", n->element);
        printf("%s ", n->previous->element);
        printf("%s ", n->previous->element);
        n = n->next;
    }
    printf(" %d",l->size);
    return 0;

}
