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
extern void reverse(struct List **l ) ;
void newNode(struct Entry **n ) ;
void insertSort(struct List **l , int v ) ;
int hasLoop(struct List *l ) ;
extern int ( /* missing proto */  malloc)() ;
void newList(struct List **l ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/linkedList/hasLoop/list3/./coverage.path",
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
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/linkedList/hasLoop/list3/./coverage.path",
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
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/linkedList/hasLoop/list3/./coverage.path",
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
extern int ( /* missing proto */  exit)() ;
int hasLoop(struct List *l ) 
{ struct Entry *ln1 ;
  struct Entry *ln2 ;
  int count ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/linkedList/hasLoop/list3/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "38\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )(l->head)->next == (unsigned int )l->head) {
    {
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    }
    return (1);
  } else {
    {
    fprintf(_coverage_fout, "23\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "39\n");
  fflush(_coverage_fout);
  }
  ln1 = l->head;
  {
  fprintf(_coverage_fout, "40\n");
  fflush(_coverage_fout);
  }
  ln2 = l->head;
  {
  fprintf(_coverage_fout, "41\n");
  fflush(_coverage_fout);
  }
  count = 0;
  {
  fprintf(_coverage_fout, "42\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "33\n");
    fflush(_coverage_fout);
    }
    if (count < 100) {
      {
      fprintf(_coverage_fout, "24\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "34\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln1->next == (unsigned int )l->head) {
      {
      fprintf(_coverage_fout, "25\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "26\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "35\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln2->next == (unsigned int )l->head) {
      {
      fprintf(_coverage_fout, "27\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "30\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )(ln2->next)->next == (unsigned int )l->head) {
        {
        fprintf(_coverage_fout, "28\n");
        fflush(_coverage_fout);
        }
        return (1);
      } else {
        {
        fprintf(_coverage_fout, "29\n");
        fflush(_coverage_fout);
        }
        ln2 = (ln2->next)->next;
      }
    }
    {
    fprintf(_coverage_fout, "36\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln1 == (unsigned int )ln2) {
      {
      fprintf(_coverage_fout, "31\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "32\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "37\n");
    fflush(_coverage_fout);
    }
    count ++;
  }
  {
  fprintf(_coverage_fout, "43\n");
  fflush(_coverage_fout);
  }
  exit(1);
}
}
extern int ( /* missing proto */  strtok)() ;
extern int ( /* missing proto */  strcmp)() ;
extern int ( /* missing proto */  printf)() ;
int main(int argc , char **argv ) 
{ char *x ;
  char *tmp ;
  int tmp___0 ;
  struct List *l ;
  struct Entry *node ;
  struct Entry *n1 ;
  struct Entry *n2 ;
  struct Entry *n3 ;
  struct Entry *n4 ;
  int status ;
  struct Entry *e ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/linkedList/hasLoop/list3/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "74\n");
  fflush(_coverage_fout);
  }
  if (argc < 2) {
    {
    fprintf(_coverage_fout, "44\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "45\n");
    fflush(_coverage_fout);
    }

  }
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
  newList(& l);
  {
  fprintf(_coverage_fout, "79\n");
  fflush(_coverage_fout);
  }
  newNode(& n1);
  {
  fprintf(_coverage_fout, "80\n");
  fflush(_coverage_fout);
  }
  newNode(& n2);
  {
  fprintf(_coverage_fout, "81\n");
  fflush(_coverage_fout);
  }
  newNode(& n3);
  {
  fprintf(_coverage_fout, "82\n");
  fflush(_coverage_fout);
  }
  newNode(& n4);
  {
  fprintf(_coverage_fout, "83\n");
  fflush(_coverage_fout);
  }
  status = 0;
  {
  fprintf(_coverage_fout, "84\n");
  fflush(_coverage_fout);
  }
  e = l->head;
  {
  fprintf(_coverage_fout, "85\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "58\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )tmp != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "46\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "59\n");
    fflush(_coverage_fout);
    }
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {
      {
      fprintf(_coverage_fout, "47\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "60\n");
    fflush(_coverage_fout);
    }
    tmp___1 = strcmp(tmp, "N1");
    {
    fprintf(_coverage_fout, "61\n");
    fflush(_coverage_fout);
    }
    if (tmp___1 == 0) {
      {
      fprintf(_coverage_fout, "48\n");
      fflush(_coverage_fout);
      }
      node = n1;
    } else {
      {
      fprintf(_coverage_fout, "49\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "62\n");
    fflush(_coverage_fout);
    }
    tmp___2 = strcmp(tmp, "N2");
    {
    fprintf(_coverage_fout, "63\n");
    fflush(_coverage_fout);
    }
    if (tmp___2 == 0) {
      {
      fprintf(_coverage_fout, "50\n");
      fflush(_coverage_fout);
      }
      node = n2;
    } else {
      {
      fprintf(_coverage_fout, "51\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "64\n");
    fflush(_coverage_fout);
    }
    tmp___3 = strcmp(tmp, "N3");
    {
    fprintf(_coverage_fout, "65\n");
    fflush(_coverage_fout);
    }
    if (tmp___3 == 0) {
      {
      fprintf(_coverage_fout, "52\n");
      fflush(_coverage_fout);
      }
      node = n3;
    } else {
      {
      fprintf(_coverage_fout, "53\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "66\n");
    fflush(_coverage_fout);
    }
    tmp___4 = strcmp(tmp, "N4");
    {
    fprintf(_coverage_fout, "67\n");
    fflush(_coverage_fout);
    }
    if (tmp___4 == 0) {
      {
      fprintf(_coverage_fout, "54\n");
      fflush(_coverage_fout);
      }
      node = n4;
    } else {
      {
      fprintf(_coverage_fout, "55\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "68\n");
    fflush(_coverage_fout);
    }
    tmp___5 = strcmp(tmp, "H");
    {
    fprintf(_coverage_fout, "69\n");
    fflush(_coverage_fout);
    }
    if (tmp___5 == 0) {
      {
      fprintf(_coverage_fout, "56\n");
      fflush(_coverage_fout);
      }
      node = l->head;
    } else {
      {
      fprintf(_coverage_fout, "57\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "70\n");
    fflush(_coverage_fout);
    }
    e->next = node;
    {
    fprintf(_coverage_fout, "71\n");
    fflush(_coverage_fout);
    }
    e = e->next;
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    tmp___6 = strtok((void *)0, " ");
    {
    fprintf(_coverage_fout, "73\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)tmp___6;
  }
  {
  fprintf(_coverage_fout, "86\n");
  fflush(_coverage_fout);
  }
  tmp___7 = hasLoop(l);
  {
  fprintf(_coverage_fout, "87\n");
  fflush(_coverage_fout);
  }
  printf(" %d", tmp___7);
  {
  fprintf(_coverage_fout, "88\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
