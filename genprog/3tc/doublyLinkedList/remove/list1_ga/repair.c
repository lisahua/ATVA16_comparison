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
int removeEntry(struct List **l , char *rm ) ;
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
  (*e)->previous = (*l)->head;
  (*e)->next = ((*l)->head)->next;
  ((*e)->next)->previous = *e;
  ((*e)->previous)->next = *e;
  __repair_del_19__26: /* CIL Label */ 
  {

  }
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
extern int ( /* missing proto */  strcmp)() ;
int removeEntry(struct List **l , char *rm ) 
{ struct Entry *e ;
  int tmp ;

  {
  e = ((*l)->head)->next;
  while ((unsigned int )e != (unsigned int )(*l)->head) {
    tmp = strcmp(e->element, rm);
    if (tmp != 0) {
      e = e->next;
    } else {
      (e->previous)->next = e->next;
      (e->next)->previous = e->previous;
      return (0);
    }
  }
  return (1);
}
}
extern int ( /* missing proto */  strtok)() ;
extern int ( /* missing proto */  strlen)() ;
extern int ( /* missing proto */  strcpy)() ;
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
  char *rm ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  struct Entry *n ;

  {
  if (argc < 2) {
    return (0);
  } else {

  }
  newList(& l);
  x = *(argv + 1);
  tmp___0 = strtok(x, " ");
  tmp = (char *)tmp___0;
  newNode(& n1);
  n1->element = (char *)"N1";
  newNode(& n2);
  n2->element = (char *)"N2";
  newNode(& n3);
  n3->element = (char *)"N3";
  newNode(& n4);
  n4->element = (char *)"N4";
  status = -1;
  e = l->head;
  rm = (char *)((void *)0);
  while ((unsigned int )tmp != (unsigned int )((void *)0)) {
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {

    }
    if (status == -1) {
      tmp___1 = strlen(tmp);
      tmp___2 = malloc(sizeof(char ) * (unsigned int )(tmp___1 + 1));
      rm = (char *)tmp___2;
      strcpy(rm, tmp);
      status = 0;
      tmp___3 = strtok((void *)0, " ");
      tmp = (char *)tmp___3;
      continue;
    } else {

    }
    tmp___4 = strcmp(tmp, "N1");
    if (tmp___4 == 0) {
      node = n1;
    } else {

    }
    tmp___5 = strcmp(tmp, "N2");
    if (tmp___5 == 0) {
      node = n2;
    } else {

    }
    tmp___6 = strcmp(tmp, "N3");
    if (tmp___6 == 0) {
      node = n3;
    } else {

    }
    tmp___7 = strcmp(tmp, "N4");
    if (tmp___7 == 0) {
      node = n4;
    } else {

    }
    tmp___8 = strcmp(tmp, "H");
    if (tmp___8 == 0) {
      node = l->head;
    } else {

    }
    addFirst(& l, & node);
    tmp___9 = strtok((void *)0, " ");
    tmp = (char *)tmp___9;
  }
  tmp___10 = hasLoopNext(l);
  if (tmp___10 == 0) {
    printf("%s", "HAS LOOP");
    return (0);
  } else {

  }
  tmp___11 = hasLoopPrev(l);
  if (tmp___11 == 0) {
    printf("%s", "HAS LOOP");
    return (0);
  } else {

  }
  tmp___12 = removeEntry(& l, rm);
  printf("%d ", tmp___12);
  n = (l->head)->next;
  while ((unsigned int )n != (unsigned int )l->head) {
    printf("%s ", n->element);
    printf("%s ", (n->previous)->element);
    printf("%s ", (n->next)->element);
    n = n->next;
  }
  printf(" %d", l->size);
  return (0);
}
}
