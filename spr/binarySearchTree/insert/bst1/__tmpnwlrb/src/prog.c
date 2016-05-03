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
    (*n)->parent = NULL;
    (*n)->left = NULL;
    (*n)->right = NULL;
    (*n)->key = 0;
}

void newTree(struct Tree** t) {
    *t = malloc(sizeof (struct Tree));
    (*t)->root = NULL;
    (*t)->size = 0;
}

int insertNode (struct Tree** t,  int k) {
    struct Node* y= NULL;
    struct Node*  x = (*t)->root;

    while (x != NULL) {
        y=x;

        if (x->key==k) {
            return 1;
        }

        if ( k<x->key)
            x = x->left;
         else if ( k>x->key)
            x = x->right;
    }
    newNode(&x);
    x->key = k;

    if (y==NULL)
        (*t)->root = x;
    else {
        if (k<y->key)
            y->left = x;
        else
            y->right = x;
    }
    x->parent = y;
  //  (*t)->size = (*t)->size +1;
    return 0;
}



void printTree(struct Node* r) {
    if ((r)==NULL) return;
    printf("%d ",(r)->key);
    printTree(r->left);
    printTree(r->right);
}

char*  findNode(struct Tree* t, int key) {
    int i=0;
    char* x = (char*) malloc(10 * sizeof(char));

    struct Node* tmp = t->root;
    if (tmp->key==key) return "RO";
    while (tmp!= NULL) {
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
    return NULL;
}


int main(int argc, char* argv[]) {
    if (argc<2) return 0;
    FILE *f = fopen(argv[1],"r");
    if (f==NULL)
        return 0;

    struct Tree* t;
    newTree(&t);

    char x[20];
    int res = 0;
    while (fscanf(f,"%s",x)==1) {
        if (x[0]== '"') continue;
        res = res +  insertNode(&t, atoi(x));
    }
    fclose(f);

    printf ("%d  ",res);
    printf ("%d  ",t->size);
    printTree(t->root);
    return 0;
}
