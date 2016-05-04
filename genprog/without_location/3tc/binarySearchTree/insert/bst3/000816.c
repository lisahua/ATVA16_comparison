struct Node {
   struct Node *parent ;
   struct Node *left ;
   struct Node *right ;
   int key ;
};
struct Tree {
   struct Node *root ;
   int size ;
};
void newNode(struct Node **n ) ;
void newTree(struct Tree **t ) ;
void printTree(struct Node *r ) ;
char *findNode(struct Tree *t , int key ) ;
int insertNode(struct Tree **t , int k ) ;
extern int ( /* missing proto */  malloc)() ;
void newNode(struct Node **n ) 
{ int tmp ;

  {
  tmp = malloc(sizeof(struct Node ));
  *n = (struct Node *)tmp;
  (*n)->parent = (struct Node *)((void *)0);
  (*n)->left = (struct Node *)((void *)0);
  (*n)->right = (struct Node *)((void *)0);
  (*n)->key = 0;
  return;
}
}
void newTree(struct Tree **t ) 
{ int tmp ;

  {
  tmp = malloc(sizeof(struct Tree ));
  *t = (struct Tree *)tmp;
  (*t)->root = (struct Node *)((void *)0);
  (*t)->size = 0;
  return;
}
}
int insertNode(struct Tree **t , int k ) 
{ struct Node *y ;
  struct Node *x ;

  {
  y = (struct Node *)((void *)0);
  x = (*t)->root;
  while ((unsigned int )x != (unsigned int )((void *)0)) {
    y = x;
    if (k < x->key) {
      x = x->left;
    } else {
      if (k > x->key) {
        x = x->right;
      } else {

      }
    }
  }
  newNode(& x);
  x->key = k;
  if ((unsigned int )y == (unsigned int )((void *)0)) {
    __repair_app_63__42e: /* CIL Label */ 
    {
    (*t)->root = x;

    }
  } else {
    if (k < y->key) {
      y->left = x;
    } else {
      y->right = x;
    }
  }
  x->parent = y;
  ((*t)->size) ++;
  return (0);
}
}
extern int ( /* missing proto */  printf)() ;
void printTree(struct Node *r ) 
{ 

  {
  if ((unsigned int )r == (unsigned int )((void *)0)) {
    return;
  } else {

  }
  printf("%d ", r->key);
  printTree(r->left);
  printTree(r->right);
  return;
}
}
char *findNode(struct Tree *t , int key ) 
{ int i ;
  char *x ;
  int tmp ;
  struct Node *tmp___0 ;

  {
  i = 0;
  tmp = malloc(10U * sizeof(char ));
  x = (char *)tmp;
  tmp___0 = t->root;
  if (tmp___0->key == key) {
    return ((char *)"RO");
  } else {

  }
  while ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
    if (tmp___0->key == key) {
      *(x + i) = (char )'\000';
      return (x);
    } else {
      if (tmp___0->key < key) {
        *(x + i) = (char )'R';
        i ++;
        tmp___0 = tmp___0->right;
      } else {
        *(x + i) = (char )'L';
        i ++;
        tmp___0 = tmp___0->left;
      }
    }
  }
  return ((char *)((void *)0));
}
}
extern int ( /* missing proto */  strtok)() ;
extern int ( /* missing proto */  atoi)() ;
int main(int argc , char **argv ) 
{ struct Tree *t ;
  char *x ;
  char *tmp ;
  int tmp___0 ;
  int res ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  if (argc < 2) {
    return (0);
  } else {

  }
  newTree(& t);
  x = *(argv + 1);
  tmp___0 = strtok(x, " ");
  tmp = (char *)tmp___0;
  res = 0;
  while ((unsigned int )tmp != (unsigned int )((void *)0)) {
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {

    }
    tmp___1 = atoi(tmp);
    tmp___2 = insertNode(& t, tmp___1);
    res += tmp___2;
    tmp___3 = strtok((void *)0, " ");
    tmp = (char *)tmp___3;
  }
  printf("%d  ", res);
  printf("%d  ", t->size);
  printTree(t->root);
  return (0);
}
}
