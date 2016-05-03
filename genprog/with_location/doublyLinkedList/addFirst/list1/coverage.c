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
   char *element ;
   struct Entry *next ;
   struct Entry *previous ;
};
struct List {
   int size ;
   struct Entry *head ;
};
void newList(struct List **l ) ;
void addFirst(struct List **l , struct Entry **e ) ;
void addLast(struct List **l , struct Entry **e ) ;
void newNode(struct Entry **n ) ;
int hasLoopNext(struct List *l ) ;
extern int ( /* missing proto */  malloc)() ;
void newList(struct List **l ) 
{ int tmp ;
  struct Entry *h ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/doublyLinkedList/addFirst/list1/./coverage.path",
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
  newNode(& h);
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  (*l)->head = h;
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  ((*l)->head)->element = (char *)"H";
  {
  fprintf(_coverage_fout, "6\n");
  fflush(_coverage_fout);
  }
  ((*l)->head)->next = (*l)->head;
  {
  fprintf(_coverage_fout, "7\n");
  fflush(_coverage_fout);
  }
  ((*l)->head)->previous = (*l)->head;
  {
  fprintf(_coverage_fout, "8\n");
  fflush(_coverage_fout);
  }
  (*l)->size = 0;
  {
  fprintf(_coverage_fout, "9\n");
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
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/doublyLinkedList/addFirst/list1/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "10\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(sizeof(struct Entry ));
  {
  fprintf(_coverage_fout, "11\n");
  fflush(_coverage_fout);
  }
  *n = (struct Entry *)tmp;
  {
  fprintf(_coverage_fout, "12\n");
  fflush(_coverage_fout);
  }
  (*n)->next = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "13\n");
  fflush(_coverage_fout);
  }
  (*n)->previous = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "14\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void addFirst(struct List **l , struct Entry **e ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/doublyLinkedList/addFirst/list1/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "15\n");
  fflush(_coverage_fout);
  }
  (*e)->previous = (*l)->head;
  {
  fprintf(_coverage_fout, "16\n");
  fflush(_coverage_fout);
  }
  (*e)->next = ((*l)->head)->next;
  {
  fprintf(_coverage_fout, "17\n");
  fflush(_coverage_fout);
  }
  ((*e)->next)->previous = *e;
  {
  fprintf(_coverage_fout, "18\n");
  fflush(_coverage_fout);
  }
  ((*e)->previous)->next = *e;
  {
  fprintf(_coverage_fout, "19\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void addLast(struct List **l , struct Entry **e ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/doublyLinkedList/addFirst/list1/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "20\n");
  fflush(_coverage_fout);
  }
  (*e)->previous = ((*l)->head)->previous;
  {
  fprintf(_coverage_fout, "21\n");
  fflush(_coverage_fout);
  }
  (*e)->next = (*l)->head;
  {
  fprintf(_coverage_fout, "22\n");
  fflush(_coverage_fout);
  }
  ((*e)->next)->previous = *e;
  {
  fprintf(_coverage_fout, "23\n");
  fflush(_coverage_fout);
  }
  ((*e)->previous)->next = *e;
  {
  fprintf(_coverage_fout, "24\n");
  fflush(_coverage_fout);
  }
  ((*l)->size) ++;
  {
  fprintf(_coverage_fout, "25\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int hasLoopNext(struct List *l ) 
{ struct Entry *ln1 ;
  struct Entry *ln2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/doublyLinkedList/addFirst/list1/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "39\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )(l->head)->next == (unsigned int )l->head) {
    {
    fprintf(_coverage_fout, "26\n");
    fflush(_coverage_fout);
    }
    return (1);
  } else {
    {
    fprintf(_coverage_fout, "27\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "40\n");
  fflush(_coverage_fout);
  }
  ln1 = l->head;
  {
  fprintf(_coverage_fout, "41\n");
  fflush(_coverage_fout);
  }
  ln2 = l->head;
  {
  fprintf(_coverage_fout, "42\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "36\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln1->next == (unsigned int )l->head) {
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
      ln1 = ln1->next;
    }
    {
    fprintf(_coverage_fout, "37\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln2->next == (unsigned int )l->head) {
      {
      fprintf(_coverage_fout, "30\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "33\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )(ln2->next)->next == (unsigned int )l->head) {
        {
        fprintf(_coverage_fout, "31\n");
        fflush(_coverage_fout);
        }
        return (1);
      } else {
        {
        fprintf(_coverage_fout, "32\n");
        fflush(_coverage_fout);
        }
        ln2 = (ln2->next)->next;
      }
    }
    {
    fprintf(_coverage_fout, "38\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln1 == (unsigned int )ln2) {
      {
      fprintf(_coverage_fout, "34\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "35\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "43\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
int hasLoopPrev(struct List *l ) 
{ struct Entry *ln1 ;
  struct Entry *ln2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/doublyLinkedList/addFirst/list1/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "57\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )(l->head)->previous == (unsigned int )l->head) {
    {
    fprintf(_coverage_fout, "44\n");
    fflush(_coverage_fout);
    }
    return (1);
  } else {
    {
    fprintf(_coverage_fout, "45\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "58\n");
  fflush(_coverage_fout);
  }
  ln1 = l->head;
  {
  fprintf(_coverage_fout, "59\n");
  fflush(_coverage_fout);
  }
  ln2 = l->head;
  {
  fprintf(_coverage_fout, "60\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "54\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln1->previous == (unsigned int )l->head) {
      {
      fprintf(_coverage_fout, "46\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "47\n");
      fflush(_coverage_fout);
      }
      ln1 = ln1->previous;
    }
    {
    fprintf(_coverage_fout, "55\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln2->previous == (unsigned int )l->head) {
      {
      fprintf(_coverage_fout, "48\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "51\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )(ln2->previous)->previous == (unsigned int )l->head) {
        {
        fprintf(_coverage_fout, "49\n");
        fflush(_coverage_fout);
        }
        return (1);
      } else {
        {
        fprintf(_coverage_fout, "50\n");
        fflush(_coverage_fout);
        }
        ln2 = (ln2->previous)->previous;
      }
    }
    {
    fprintf(_coverage_fout, "56\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )ln1 == (unsigned int )ln2) {
      {
      fprintf(_coverage_fout, "52\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "53\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "61\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
extern int ( /* missing proto */  strtok)() ;
extern int ( /* missing proto */  strcmp)() ;
extern int ( /* missing proto */  printf)() ;
int main(int argc , char **argv ) 
{ struct List *l ;
  char *x ;
  char *tmp ;
  int tmp___0 ;
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
  int tmp___8 ;
  struct Entry *n ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/issre16_benchmark/genprog/with_location/doublyLinkedList/addFirst/list1/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "103\n");
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
  fprintf(_coverage_fout, "104\n");
  fflush(_coverage_fout);
  }
  newList(& l);
  {
  fprintf(_coverage_fout, "105\n");
  fflush(_coverage_fout);
  }
  x = *(argv + 1);
  {
  fprintf(_coverage_fout, "106\n");
  fflush(_coverage_fout);
  }
  tmp___0 = strtok(x, " ");
  {
  fprintf(_coverage_fout, "107\n");
  fflush(_coverage_fout);
  }
  tmp = (char *)tmp___0;
  {
  fprintf(_coverage_fout, "108\n");
  fflush(_coverage_fout);
  }
  newNode(& n1);
  {
  fprintf(_coverage_fout, "109\n");
  fflush(_coverage_fout);
  }
  n1->element = (char *)"N1";
  {
  fprintf(_coverage_fout, "110\n");
  fflush(_coverage_fout);
  }
  newNode(& n2);
  {
  fprintf(_coverage_fout, "111\n");
  fflush(_coverage_fout);
  }
  n2->element = (char *)"N2";
  {
  fprintf(_coverage_fout, "112\n");
  fflush(_coverage_fout);
  }
  newNode(& n3);
  {
  fprintf(_coverage_fout, "113\n");
  fflush(_coverage_fout);
  }
  n3->element = (char *)"N3";
  {
  fprintf(_coverage_fout, "114\n");
  fflush(_coverage_fout);
  }
  newNode(& n4);
  {
  fprintf(_coverage_fout, "115\n");
  fflush(_coverage_fout);
  }
  n4->element = (char *)"N4";
  {
  fprintf(_coverage_fout, "116\n");
  fflush(_coverage_fout);
  }
  status = 0;
  {
  fprintf(_coverage_fout, "117\n");
  fflush(_coverage_fout);
  }
  e = l->head;
  {
  fprintf(_coverage_fout, "118\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "76\n");
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
    fprintf(_coverage_fout, "77\n");
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
    fprintf(_coverage_fout, "78\n");
    fflush(_coverage_fout);
    }
    tmp___1 = strcmp(tmp, "N1");
    {
    fprintf(_coverage_fout, "79\n");
    fflush(_coverage_fout);
    }
    if (tmp___1 == 0) {
      {
      fprintf(_coverage_fout, "66\n");
      fflush(_coverage_fout);
      }
      node = n1;
    } else {
      {
      fprintf(_coverage_fout, "67\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "80\n");
    fflush(_coverage_fout);
    }
    tmp___2 = strcmp(tmp, "N2");
    {
    fprintf(_coverage_fout, "81\n");
    fflush(_coverage_fout);
    }
    if (tmp___2 == 0) {
      {
      fprintf(_coverage_fout, "68\n");
      fflush(_coverage_fout);
      }
      node = n2;
    } else {
      {
      fprintf(_coverage_fout, "69\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "82\n");
    fflush(_coverage_fout);
    }
    tmp___3 = strcmp(tmp, "N3");
    {
    fprintf(_coverage_fout, "83\n");
    fflush(_coverage_fout);
    }
    if (tmp___3 == 0) {
      {
      fprintf(_coverage_fout, "70\n");
      fflush(_coverage_fout);
      }
      node = n3;
    } else {
      {
      fprintf(_coverage_fout, "71\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "84\n");
    fflush(_coverage_fout);
    }
    tmp___4 = strcmp(tmp, "N4");
    {
    fprintf(_coverage_fout, "85\n");
    fflush(_coverage_fout);
    }
    if (tmp___4 == 0) {
      {
      fprintf(_coverage_fout, "72\n");
      fflush(_coverage_fout);
      }
      node = n4;
    } else {
      {
      fprintf(_coverage_fout, "73\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "86\n");
    fflush(_coverage_fout);
    }
    tmp___5 = strcmp(tmp, "H");
    {
    fprintf(_coverage_fout, "87\n");
    fflush(_coverage_fout);
    }
    if (tmp___5 == 0) {
      {
      fprintf(_coverage_fout, "74\n");
      fflush(_coverage_fout);
      }
      node = l->head;
    } else {
      {
      fprintf(_coverage_fout, "75\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "88\n");
    fflush(_coverage_fout);
    }
    addFirst(& l, & node);
    {
    fprintf(_coverage_fout, "89\n");
    fflush(_coverage_fout);
    }
    tmp___6 = strtok((void *)0, " ");
    {
    fprintf(_coverage_fout, "90\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)tmp___6;
  }
  {
  fprintf(_coverage_fout, "119\n");
  fflush(_coverage_fout);
  }
  tmp___7 = hasLoopNext(l);
  {
  fprintf(_coverage_fout, "120\n");
  fflush(_coverage_fout);
  }
  if (tmp___7 == 0) {
    {
    fprintf(_coverage_fout, "91\n");
    fflush(_coverage_fout);
    }
    printf("%s", "HAS LOOP");
    {
    fprintf(_coverage_fout, "92\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "93\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "121\n");
  fflush(_coverage_fout);
  }
  tmp___8 = hasLoopPrev(l);
  {
  fprintf(_coverage_fout, "122\n");
  fflush(_coverage_fout);
  }
  if (tmp___8 == 0) {
    {
    fprintf(_coverage_fout, "94\n");
    fflush(_coverage_fout);
    }
    printf("%s", "HAS LOOP");
    {
    fprintf(_coverage_fout, "95\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "96\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "123\n");
  fflush(_coverage_fout);
  }
  n = (l->head)->next;
  {
  fprintf(_coverage_fout, "124\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "98\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )n != (unsigned int )l->head) {
      {
      fprintf(_coverage_fout, "97\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "99\n");
    fflush(_coverage_fout);
    }
    printf("%s ", n->element);
    {
    fprintf(_coverage_fout, "100\n");
    fflush(_coverage_fout);
    }
    printf("%s ", (n->previous)->element);
    {
    fprintf(_coverage_fout, "101\n");
    fflush(_coverage_fout);
    }
    printf("%s ", (n->previous)->element);
    {
    fprintf(_coverage_fout, "102\n");
    fflush(_coverage_fout);
    }
    n = n->next;
  }
  {
  fprintf(_coverage_fout, "125\n");
  fflush(_coverage_fout);
  }
  printf(" %d", l->size);
  {
  fprintf(_coverage_fout, "126\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
