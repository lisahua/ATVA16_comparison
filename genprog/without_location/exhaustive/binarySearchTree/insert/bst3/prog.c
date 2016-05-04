#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node {
    struct Node* parent;
    struct Node* left;
    struct Node* right;
    int key;
};

struct Tree {
    struct Node* root;
    int size;
};

void newNode(struct Node** n);
void newTree(struct Tree** t);
void printTree(struct Node* r);
char*  findNode(struct Tree* t, int key) ;
int insertNode (struct Tree** t, int k);

void newNode(struct Node** n) {
    *n = malloc (sizeof (struct Node));
    (*n)->parent = (void*) 0;
    (*n)->left = (void*) 0;
    (*n)->right = (void*) 0;
    (*n)->key = 0;
}

void newTree(struct Tree** t) {
    *t = malloc(sizeof (struct Tree));
    (*t)->root = (void*) 0;
    (*t)->size = 0;
}

int insertNode (struct Tree** t,  int k) {
    struct Node* y= (void*) 0;
    struct Node*  x = (*t)->root;

    while (x != (void*) 0) {
        y=x;

    //    if (x->key==k) {
      //      return 1;
      //  }

        if ( k<x->key)
            x = x->left;
         else if ( k>x->key)
            x = x->right;
    }
    newNode(&x);
    x->key = k;

    if (y==(void*) 0)
        (*t)->root = x;
    else {
        if (k<y->key)
            y->left = x;
        else
            y->right = x;
    }
    x->parent = y;
    (*t)->size = (*t)->size +1;
    return 0;
}



void printTree(struct Node* r) {
    if ((r)==(void*) 0) return;
    printf("%d ",(r)->key);
    printTree(r->left);
    printTree(r->right);
}

char*  findNode(struct Tree* t, int key) {
    int i=0;
    char* x = (char*) malloc(10 * sizeof(char));

    struct Node* tmp = t->root;
    if (tmp->key==key) return "RO";
    while (tmp!= (void*) 0) {
        if (tmp->key == key) {
            x[i] = '\0';
            return x;
        } else if (tmp->key < key) {
            x[i]='R';
            i++;
            tmp = tmp->right;
        } else {
            x[i]='L';
            i++;
            tmp = tmp->left;
        }
    }
    return (void*) 0;
}


int main(int argc, char* argv[]) {
    if (argc<2) return 0;
  //  FILE *f = fopen(argv[1],"r");
   // if (f==(void*) 0)
     //   return 0;

    struct Tree* t;
    newTree(&t);

    char* x = argv[1];
    char* tmp;
    tmp = strtok(x," ");

    int res = 0;
    while (tmp != (void*)0) {
        if (tmp[0]== '"') continue;
        res = res +  insertNode(&t, atoi(tmp));
        tmp = strtok((void*)0, " ");
    }

    printf ("%d  ",res);
    printf ("%d  ",t->size);
    printTree(t->root);
    return 0;
}
