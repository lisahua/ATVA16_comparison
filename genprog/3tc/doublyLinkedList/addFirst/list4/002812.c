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
  tmp = malloc(sizeof(struct List ));
  *l = (struct List *)tmp;
  newNode(& h);
  (*l)->head = h;
  ((*l)->head)->element = (char *)"H";
  ((*l)->head)->next = (*l)->head;
  ((*l)->head)->previous = (*l)->head;
  (*l)->size = 0;
  return;
}
}
void newNode(struct Entry **n ) 
{ int tmp ;

  {
  tmp = malloc(sizeof(struct Entry ));
  *n = (struct Entry *)tmp;
  (*n)->next = (struct Entry *)((void *)0);
  (*n)->previous = (struct Entry *)((void *)0);
  return;
}
}
void addFirst(struct List **l , struct Entry **e ) 
{ 

  {
  (*e)->next = ((*l)->head)->next;
  ((*e)->next)->previous = *e;
  ((*e)->previous)->next = *e;
  ((*l)->size) ++;
  return;
}
}
void addLast(struct List **l , struct Entry **e ) 
{ 

  {
  (*e)->previous = ((*l)->head)->previous;
  (*e)->next = (*l)->head;
  ((*e)->next)->previous = *e;
  ((*e)->previous)->next = *e;
  ((*l)->size) ++;
  return;
}
}
int hasLoopNext(struct List *l ) 
{ struct Entry *ln1 ;
  struct Entry *ln2 ;

  {
  if ((unsigned int )(l->head)->next == (unsigned int )l->head) {
    return (1);
  } else {

  }
  ln1 = l->head;
  ln2 = l->head;
  while (1) {
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
    if ((unsigned int )ln1 == (unsigned int )ln2) {
      return (0);
    } else {

    }
  }
  return (1);
}
}
int hasLoopPrev(struct List *l ) 
{ struct Entry *ln1 ;
  struct Entry *ln2 ;

  {
  if ((unsigned int )(l->head)->previous == (unsigned int )l->head) {
    return (1);
  } else {

  }
  ln1 = l->head;
  ln2 = l->head;
  while (1) {
    if ((unsigned int )ln1->previous == (unsigned int )l->head) {
      return (1);
    } else {
      ln1 = ln1->previous;
    }
    if ((unsigned int )ln2->previous == (unsigned int )l->head) {
      return (1);
    } else {
      if ((unsigned int )(ln2->previous)->previous == (unsigned int )l->head) {
        return (1);
      } else {
        ln2 = (ln2->previous)->previous;
      }
    }
    if ((unsigned int )ln1 == (unsigned int )ln2) {
      return (0);
    } else {

    }
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
  if (argc < 2) {
    return (0);
  } else {

  }
  newList(& l);
  __repair_swap1_112__ee6: /* CIL Label */ 
  newNode(& n3);
  tmp___0 = strtok(x, " ");
  tmp = (char *)tmp___0;
  newNode(& n1);
  n1->element = (char *)"N1";
  newNode(& n2);
  n2->element = (char *)"N2";
  __repair_swap1_105__ee7: /* CIL Label */ 
  x = *(argv + 1);
  n3->element = (char *)"N3";
  newNode(& n4);
  n4->element = (char *)"N4";
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
    addFirst(& l, & node);
    tmp___6 = strtok((void *)0, " ");
    tmp = (char *)tmp___6;
  }
  tmp___7 = hasLoopNext(l);
  if (tmp___7 == 0) {
    printf("%s", "HAS LOOP");
    return (0);
  } else {

  }
  tmp___8 = hasLoopPrev(l);
  if (tmp___8 == 0) {
    printf("%s", "HAS LOOP");
    return (0);
  } else {

  }
  n = (l->head)->next;
  while ((unsigned int )n != (unsigned int )l->head) {
    printf("%s ", n->element);
    printf("%s ", (n->previous)->element);
    printf("%s ", (n->previous)->element);
    n = n->next;
  }
  printf(" %d", l->size);
  return (0);
}
}
