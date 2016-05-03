extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c ,
                                                  unsigned int __n )  __attribute__((__nonnull__(1),
__leaf__)) ;
struct _IO_FILE;
extern int fprintf(struct _IO_FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
extern struct _IO_FILE *fopen(char const   * __restrict  __filename ,
                              char const   * __restrict  __modes ) ;
extern int fflush(struct _IO_FILE *__stream ) ;
extern int fclose(struct _IO_FILE *__stream ) ;
struct _IO_FILE *_coverage_fout  ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/binarySearchTree/insert/bst3/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(sizeof(struct Node ));
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  *n = (struct Node *)tmp;
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  (*n)->parent = (struct Node *)((void *)0);
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  (*n)->left = (struct Node *)((void *)0);
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  (*n)->right = (struct Node *)((void *)0);
  {
  fprintf(_coverage_fout, "6\n");
  fflush(_coverage_fout);
  }
  (*n)->key = 0;
  {
  fprintf(_coverage_fout, "7\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void newTree(struct Tree **t ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/binarySearchTree/insert/bst3/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "8\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(sizeof(struct Tree ));
  {
  fprintf(_coverage_fout, "9\n");
  fflush(_coverage_fout);
  }
  *t = (struct Tree *)tmp;
  {
  fprintf(_coverage_fout, "10\n");
  fflush(_coverage_fout);
  }
  (*t)->root = (struct Node *)((void *)0);
  {
  fprintf(_coverage_fout, "11\n");
  fflush(_coverage_fout);
  }
  (*t)->size = 0;
  {
  fprintf(_coverage_fout, "12\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int insertNode(struct Tree **t , int k ) 
{ struct Node *y ;
  struct Node *x ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/binarySearchTree/insert/bst3/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "25\n");
  fflush(_coverage_fout);
  }
  y = (struct Node *)((void *)0);
  {
  fprintf(_coverage_fout, "26\n");
  fflush(_coverage_fout);
  }
  x = (*t)->root;
  {
  fprintf(_coverage_fout, "27\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "18\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )x != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "13\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "19\n");
    fflush(_coverage_fout);
    }
    y = x;
    {
    fprintf(_coverage_fout, "20\n");
    fflush(_coverage_fout);
    }
    if (k < x->key) {
      {
      fprintf(_coverage_fout, "14\n");
      fflush(_coverage_fout);
      }
      x = x->left;
    } else {
      {
      fprintf(_coverage_fout, "17\n");
      fflush(_coverage_fout);
      }
      if (k > x->key) {
        {
        fprintf(_coverage_fout, "15\n");
        fflush(_coverage_fout);
        }
        x = x->right;
      } else {
        {
        fprintf(_coverage_fout, "16\n");
        fflush(_coverage_fout);
        }

      }
    }
  }
  {
  fprintf(_coverage_fout, "28\n");
  fflush(_coverage_fout);
  }
  newNode(& x);
  {
  fprintf(_coverage_fout, "29\n");
  fflush(_coverage_fout);
  }
  x->key = k;
  {
  fprintf(_coverage_fout, "30\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )y == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "21\n");
    fflush(_coverage_fout);
    }
    (*t)->root = x;
  } else {
    {
    fprintf(_coverage_fout, "24\n");
    fflush(_coverage_fout);
    }
    if (k < y->key) {
      {
      fprintf(_coverage_fout, "22\n");
      fflush(_coverage_fout);
      }
      y->left = x;
    } else {
      {
      fprintf(_coverage_fout, "23\n");
      fflush(_coverage_fout);
      }
      y->right = x;
    }
  }
  {
  fprintf(_coverage_fout, "31\n");
  fflush(_coverage_fout);
  }
  x->parent = y;
  {
  fprintf(_coverage_fout, "32\n");
  fflush(_coverage_fout);
  }
  ((*t)->size) ++;
  {
  fprintf(_coverage_fout, "33\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
extern int ( /* missing proto */  printf)() ;
void printTree(struct Node *r ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/binarySearchTree/insert/bst3/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "36\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )r == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "34\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "35\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "37\n");
  fflush(_coverage_fout);
  }
  printf("%d ", r->key);
  {
  fprintf(_coverage_fout, "38\n");
  fflush(_coverage_fout);
  }
  printTree(r->left);
  {
  fprintf(_coverage_fout, "39\n");
  fflush(_coverage_fout);
  }
  printTree(r->right);
  {
  fprintf(_coverage_fout, "40\n");
  fflush(_coverage_fout);
  }
  return;
}
}
char *findNode(struct Tree *t , int key ) 
{ int i ;
  char *x ;
  int tmp ;
  struct Node *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/binarySearchTree/insert/bst3/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "55\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "56\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(10U * sizeof(char ));
  {
  fprintf(_coverage_fout, "57\n");
  fflush(_coverage_fout);
  }
  x = (char *)tmp;
  {
  fprintf(_coverage_fout, "58\n");
  fflush(_coverage_fout);
  }
  tmp___0 = t->root;
  {
  fprintf(_coverage_fout, "59\n");
  fflush(_coverage_fout);
  }
  if (tmp___0->key == key) {
    {
    fprintf(_coverage_fout, "41\n");
    fflush(_coverage_fout);
    }
    return ((char *)"RO");
  } else {
    {
    fprintf(_coverage_fout, "42\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "60\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "53\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "43\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "54\n");
    fflush(_coverage_fout);
    }
    if (tmp___0->key == key) {
      {
      fprintf(_coverage_fout, "44\n");
      fflush(_coverage_fout);
      }
      *(x + i) = (char )'\000';
      {
      fprintf(_coverage_fout, "45\n");
      fflush(_coverage_fout);
      }
      return (x);
    } else {
      {
      fprintf(_coverage_fout, "52\n");
      fflush(_coverage_fout);
      }
      if (tmp___0->key < key) {
        {
        fprintf(_coverage_fout, "46\n");
        fflush(_coverage_fout);
        }
        *(x + i) = (char )'R';
        {
        fprintf(_coverage_fout, "47\n");
        fflush(_coverage_fout);
        }
        i ++;
        {
        fprintf(_coverage_fout, "48\n");
        fflush(_coverage_fout);
        }
        tmp___0 = tmp___0->right;
      } else {
        {
        fprintf(_coverage_fout, "49\n");
        fflush(_coverage_fout);
        }
        *(x + i) = (char )'L';
        {
        fprintf(_coverage_fout, "50\n");
        fflush(_coverage_fout);
        }
        i ++;
        {
        fprintf(_coverage_fout, "51\n");
        fflush(_coverage_fout);
        }
        tmp___0 = tmp___0->left;
      }
    }
  }
  {
  fprintf(_coverage_fout, "61\n");
  fflush(_coverage_fout);
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/binarySearchTree/insert/bst3/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "73\n");
  fflush(_coverage_fout);
  }
  if (argc < 2) {
    {
    fprintf(_coverage_fout, "62\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "63\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "74\n");
  fflush(_coverage_fout);
  }
  newTree(& t);
  {
  fprintf(_coverage_fout, "75\n");
  fflush(_coverage_fout);
  }
  x = *(argv + 1);
  {
  fprintf(_coverage_fout, "76\n");
  fflush(_coverage_fout);
  }
  tmp___0 = strtok(x, " ");
  {
  fprintf(_coverage_fout, "77\n");
  fflush(_coverage_fout);
  }
  tmp = (char *)tmp___0;
  {
  fprintf(_coverage_fout, "78\n");
  fflush(_coverage_fout);
  }
  res = 0;
  {
  fprintf(_coverage_fout, "79\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "66\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )tmp != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "64\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "67\n");
    fflush(_coverage_fout);
    }
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {
      {
      fprintf(_coverage_fout, "65\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "68\n");
    fflush(_coverage_fout);
    }
    tmp___1 = atoi(tmp);
    {
    fprintf(_coverage_fout, "69\n");
    fflush(_coverage_fout);
    }
    tmp___2 = insertNode(& t, tmp___1);
    {
    fprintf(_coverage_fout, "70\n");
    fflush(_coverage_fout);
    }
    res += tmp___2;
    {
    fprintf(_coverage_fout, "71\n");
    fflush(_coverage_fout);
    }
    tmp___3 = strtok((void *)0, " ");
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)tmp___3;
  }
  {
  fprintf(_coverage_fout, "80\n");
  fflush(_coverage_fout);
  }
  printf("%d  ", res);
  {
  fprintf(_coverage_fout, "81\n");
  fflush(_coverage_fout);
  }
  printf("%d  ", t->size);
  {
  fprintf(_coverage_fout, "82\n");
  fflush(_coverage_fout);
  }
  printTree(t->root);
  {
  fprintf(_coverage_fout, "83\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
