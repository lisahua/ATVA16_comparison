#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Entry {
    struct Entry* parent;
    struct Entry* left;
    struct Entry* right;
    char* value;
    int color;
};

struct TreeMap {
    struct Entry* root;
    int size;
};

void newEntry(struct Entry** n);
void newTreeMap(struct TreeMap** t);
void getFirstEntry(struct TreeMap** tree, struct Entry** p);
void successor(struct Entry** t, struct Entry** p);
int containsValue(struct Entry* root, char* value);
void buildFromSorted (int level, int lo, int hi, int redLevel, char** value, struct Entry** res);
void buildTree(int size, char** value, struct Entry** root) ;
int val_i;

void newEntry(struct Entry** n) {
     *n = malloc (sizeof (struct Entry));
    (*n)->parent = (void*) 0;
    (*n)->left = (void*) 0;
    (*n)->right = (void*) 0;
    (*n)->color = 1;
    (*n)->value = (void*) 0;
}

void newTreeMap(struct TreeMap** t) {
    *t = malloc(sizeof (struct TreeMap));
    (*t)->root = (void*) 0;
    (*t)->size = 0;
}

void getFirstEntry(struct TreeMap** tree, struct Entry** p) {
    *p = (*tree)->root;
    if ((*p)!=(void*) 0) {
        while ((*p)->left != (void*) 0)
            *p = (*p)->left;
    }
    return ;
}

void successor(struct Entry** t, struct Entry** p) {
    if ((*t)==(void*) 0) {
        (*p)=(void*) 0;
        return;
    }else if ((*t)->left !=(void*) 0) {
        *p = (*t)->right;
        while ((*p)->left != (void*) 0)
            *p = (*p)->left;
        return;
    } else {
        *p = (*t)->parent;
        struct Entry* ch = *t;
        while (((*p) != (void*) 0) && (ch ==(*p)->right)) {
            ch = *p;
            *p = (*p)->parent;
        }
        return;
    }
}

int containsValue(struct Entry* root, char* value) {
    struct Entry* e = root;
//    printf("contains value %s root %s, %d",value, e->value,strcmp(value, e->value));
    if (e !=(void*) 0) {
        while (e->left != (void*) 0)
            e = e->left;
    }

    int cnt = 0;
    while ((e!= (void*) 0)&& (cnt<10)) {
        cnt++;
        if ((value ==(void*) 0 && e->value == (void*) 0) || (strcmp(value, e->value)==0))
            return 0;

        if ((e->right) != (void*) 0) {
            struct Entry* p = e->right;
            while ((p->left != (void*) 0))
                p = p->left;
            e = p;
        }

        else {
            struct Entry* ch = e;

            struct Entry* p = e->parent;
            // BUG RBTERR1
            while ((p!=(void*) 0) && (p->left == (void*) 0)) {
                ch = p;
                p = p->parent;
            }
            e=p;
        }
    }
   // if (cnt==10)
     //   return 1;
    return 1;
}

void buildFromSorted (int level, int lo, int hi, int redLevel, char** value, struct Entry** res) {
    if (hi < lo) {
        *res = (void*) 0;
        return;
    }
    int mid = (lo+hi)/2;
    struct Entry* left = (void*) 0;
    if (lo < mid)
         buildFromSorted(level+1, lo, mid-1,redLevel, value, &left);

    struct Entry* middle;
    newEntry(&middle);
//     printf("build sort middle value %s, %s,",value[0],value[val_i]);
    middle->value = value[val_i++];


    if (level==redLevel)
        middle->color = 0;
    if (left != (void*) 0) {
        middle->left = left;
        left->parent = middle;
    }

    if (mid < hi) {
        struct Entry* right;
        buildFromSorted(level+1,mid+1,hi, redLevel, value, &right);
        middle->right = right;
        right->parent = middle;
    }
    *res = middle;
}

void buildTree(int size, char** value, struct Entry** root) {
    int level = 0;
    for (int m=size-1;m>=0;m=m/2-1)
        level++;

    buildFromSorted(0,0,size-1,level,value,root);
}

void printTree(struct Entry* root) {
    if (root==(void*) 0) return;
    printf("%s ",root->value);
    printTree(root->left);
     printTree(root->right);
}
int main(int argc, char* argv[]) {
    if (argc<2) return 0;

    struct TreeMap* t;
    newTreeMap(&t);

    char *x = argv[1];
     char* input[20];
    int i=0;
    char* find;
    char* tmp;
    tmp = strtok(x," ");
    int len = strlen(tmp)+1;
    find = (char*) malloc (len * sizeof(char));
    strcpy(find,tmp);
    char* tkn = strtok ((void*) 0," ");
    while (tkn != (void*) 0) {
        if (tkn[0]== '"') continue;
            int len = strlen(x)+1;
            input[i] = (char*) malloc(len * sizeof (char));// (char*) malloc (sizeof (char*len))
           strcpy(input[i],tkn);
            i = i+1;
            tkn = strtok ((void*) 0," ");
        }
    val_i = 0;

    struct Entry* root = t->root;
    buildTree(i,input,&root);
//    printf("%s ","after build tree root ");
//    printTree(root);
    int res = containsValue(root, find);
    printf("%d",res);

    return 0;
}
