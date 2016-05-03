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
  tmp = malloc(sizeof(struct List ));
  *l = (struct List *)tmp;
  newNode(& (*l)->head);
  ((*l)->head)->next = (*l)->head;
  return;
}
}
void newNode(struct Entry **n ) 
{ int tmp ;

  {
  tmp = malloc(sizeof(struct Entry ));
  *n = (struct Entry *)tmp;
  (*n)->next = (struct Entry *)((void *)0);
  return;
}
}
void insertSort(struct List **l , int v ) 
{ struct Entry *in ;
  struct Entry *e ;

  {
  newNode(& in);
  in->element = v;
  e = (*l)->head;
  while ((unsigned int )e->next != (unsigned int )(*l)->head) {
    if ((e->next)->element < v) {
      e = e->next;
    } else {
      break;
    }
  }
  in->next = e->next;
  e->next = in;
  ((*l)->size) ++;
  return;
}
}
extern int ( /* missing proto */  exit)() ;
int hasLoop(struct List *l ) 
{ struct Entry *ln1 ;
  struct Entry *ln2 ;
  int count ;

  {
  if ((unsigned int )(l->head)->next == (unsigned int )l->head) {
    return (1);
  } else {

  }
  ln1 = l->head;
  ln2 = l->head;
  count = 0;
  while (count < 100) {
    if ((unsigned int )ln1->next == (unsigned int )l->head) {
      return (1);
    } else {
      ln1 = ln1->next;
    }
    if ((unsigned int )ln2->next == (unsigned int )l->head) {
      return (1);
    } else {
      if ((unsigned int )(ln2->next)->next == (unsigned int )l->head) {
        return (1);
      } else {
        ln2 = (ln2->next)->next;
      }
    }
    __repair_del_34__600: /* CIL Label */ 
    __repair_del_34__5ff: /* CIL Label */ 
    __repair_del_34__5fe: /* CIL Label */ 
    __repair_app_22__5fd: /* CIL Label */ 
    {

    }
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
  if (argc < 2) {
    return (0);
  } else {

  }
  x = *(argv + 1);
  tmp___0 = strtok(x, " ");
  tmp = (char *)tmp___0;
  newList(& l);
  newNode(& n1);
  newNode(& n2);
  newNode(& n3);
  newNode(& n4);
  status = 0;
  e = l->head;
  while ((unsigned int )tmp != (unsigned int )((void *)0)) {
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {

    }
    tmp___1 = strcmp(tmp, "N1");
    if (tmp___1 == 0) {
      node = n1;
    } else {

    }
    tmp___2 = strcmp(tmp, "N2");
    if (tmp___2 == 0) {
      node = n2;
    } else {

    }
    tmp___3 = strcmp(tmp, "N3");
    if (tmp___3 == 0) {
      node = n3;
    } else {

    }
    tmp___4 = strcmp(tmp, "N4");
    if (tmp___4 == 0) {
      node = n4;
    } else {

    }
    tmp___5 = strcmp(tmp, "H");
    if (tmp___5 == 0) {
      node = l->head;
    } else {

    }
    e->next = node;
    e = e->next;
    tmp___6 = strtok((void *)0, " ");
    tmp = (char *)tmp___6;
  }
  tmp___7 = hasLoop(l);
  printf(" %d", tmp___7);
  return (0);
}
}
