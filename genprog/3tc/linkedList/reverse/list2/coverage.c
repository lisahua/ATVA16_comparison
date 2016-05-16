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
struct Entry {
   int element ;
   struct Entry *next ;
};
struct List {
   int size ;
   struct Entry *head ;
};
void newList(struct List **l ) ;
void reverse(struct List **l ) ;
void newNode(struct Entry **n ) ;
void insertSort(struct List **l , int v ) ;
extern int hasLoop(struct List *l ) ;
extern int ( /* missing proto */  malloc)() ;
void newList(struct List **l ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/linkedList/reverse/list2/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(sizeof(struct List ));
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  *l = (struct List *)tmp;
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  newNode(& (*l)->head);
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  ((*l)->head)->next = (*l)->head;
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void newNode(struct Entry **n ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/linkedList/reverse/list2/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "6\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(sizeof(struct Entry ));
  {
  fprintf(_coverage_fout, "7\n");
  fflush(_coverage_fout);
  }
  *n = (struct Entry *)tmp;
  {
  fprintf(_coverage_fout, "8\n");
  fflush(_coverage_fout);
  }
  (*n)->next = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "9\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void insertSort(struct List **l , int v ) 
{ struct Entry *in ;
  struct Entry *e ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/linkedList/reverse/list2/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "14\n");
  fflush(_coverage_fout);
  }
  newNode(& in);
  {
  fprintf(_coverage_fout, "15\n");
  fflush(_coverage_fout);
  }
  in->element = v;
  {
  fprintf(_coverage_fout, "16\n");
  fflush(_coverage_fout);
  }
  e = (*l)->head;
  {
  fprintf(_coverage_fout, "17\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "12\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )e->next != (unsigned int )(*l)->head) {
      {
      fprintf(_coverage_fout, "10\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "13\n");
    fflush(_coverage_fout);
    }
    if ((e->next)->element < v) {
      {
      fprintf(_coverage_fout, "11\n");
      fflush(_coverage_fout);
      }
      e = e->next;
    } else {
      break;
    }
  }
  {
  fprintf(_coverage_fout, "18\n");
  fflush(_coverage_fout);
  }
  in->next = e->next;
  {
  fprintf(_coverage_fout, "19\n");
  fflush(_coverage_fout);
  }
  e->next = in;
  {
  fprintf(_coverage_fout, "20\n");
  fflush(_coverage_fout);
  }
  ((*l)->size) ++;
  {
  fprintf(_coverage_fout, "21\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void reverse(struct List **l ) 
{ struct Entry *ln1 ;
  struct Entry *ln2 ;
  struct Entry *ln3 ;
  struct Entry *ln4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/linkedList/reverse/list2/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "31\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )((*l)->head)->next == (unsigned int )(*l)->head) {
    {
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "23\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "32\n");
  fflush(_coverage_fout);
  }
  ln1 = ((*l)->head)->next;
  {
  fprintf(_coverage_fout, "33\n");
  fflush(_coverage_fout);
  }
  ln2 = (((*l)->head)->next)->next;
  {
  fprintf(_coverage_fout, "34\n");
  fflush(_coverage_fout);
  }
  ln3 = (*l)->head;
  {
  fprintf(_coverage_fout, "35\n");
  fflush(_coverage_fout);
  }
  ln4 = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "36\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "25\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln2 != (unsigned int )(*l)->head) {
      {
      fprintf(_coverage_fout, "24\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "26\n");
    fflush(_coverage_fout);
    }
    ln4 = ln2->next;
    {
    fprintf(_coverage_fout, "27\n");
    fflush(_coverage_fout);
    }
    ln1->next = ln3;
    {
    fprintf(_coverage_fout, "28\n");
    fflush(_coverage_fout);
    }
    ln3 = ln1;
    {
    fprintf(_coverage_fout, "29\n");
    fflush(_coverage_fout);
    }
    ln1 = ln2;
    {
    fprintf(_coverage_fout, "30\n");
    fflush(_coverage_fout);
    }
    ln2 = ln4;
  }
  {
  fprintf(_coverage_fout, "37\n");
  fflush(_coverage_fout);
  }
  ln1->next = ln3;
  {
  fprintf(_coverage_fout, "38\n");
  fflush(_coverage_fout);
  }
  return;
}
}
extern int ( /* missing proto */  strtok)() ;
extern int ( /* missing proto */  atoi)() ;
extern int ( /* missing proto */  printf)() ;
int main(int argc , char **argv ) 
{ struct List *l ;
  char *x ;
  char *tmp ;
  int tmp___0 ;
  struct Entry *node ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/linkedList/reverse/list2/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "53\n");
  fflush(_coverage_fout);
  }
  if (argc < 2) {
    {
    fprintf(_coverage_fout, "39\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "40\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "54\n");
  fflush(_coverage_fout);
  }
  newList(& l);
  {
  fprintf(_coverage_fout, "55\n");
  fflush(_coverage_fout);
  }
  x = *(argv + 1);
  {
  fprintf(_coverage_fout, "56\n");
  fflush(_coverage_fout);
  }
  tmp___0 = strtok(x, " ");
  {
  fprintf(_coverage_fout, "57\n");
  fflush(_coverage_fout);
  }
  tmp = (char *)tmp___0;
  {
  fprintf(_coverage_fout, "58\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "43\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )tmp != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "41\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "44\n");
    fflush(_coverage_fout);
    }
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {
      {
      fprintf(_coverage_fout, "42\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "45\n");
    fflush(_coverage_fout);
    }
    tmp___1 = atoi(tmp);
    {
    fprintf(_coverage_fout, "46\n");
    fflush(_coverage_fout);
    }
    insertSort(& l, tmp___1);
    {
    fprintf(_coverage_fout, "47\n");
    fflush(_coverage_fout);
    }
    tmp___2 = strtok((void *)0, " ");
    {
    fprintf(_coverage_fout, "48\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)tmp___2;
  }
  {
  fprintf(_coverage_fout, "59\n");
  fflush(_coverage_fout);
  }
  reverse(& l);
  {
  fprintf(_coverage_fout, "60\n");
  fflush(_coverage_fout);
  }
  node = l->head;
  {
  fprintf(_coverage_fout, "61\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "50\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )node->next != (unsigned int )l->head) {
      {
      fprintf(_coverage_fout, "49\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "51\n");
    fflush(_coverage_fout);
    }
    printf("%d ", (node->next)->element);
    {
    fprintf(_coverage_fout, "52\n");
    fflush(_coverage_fout);
    }
    node = node->next;
  }
  {
  fprintf(_coverage_fout, "62\n");
  fflush(_coverage_fout);
  }
  printf(" %d", l->size);
  {
  fprintf(_coverage_fout, "63\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
