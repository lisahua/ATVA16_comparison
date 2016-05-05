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

  {
  if ((unsigned int )(l->head)->next == (unsigned int )l->head) {
    return (1);
  } else {

  }
  ln1 = l->head;
  ln2 = l->head;
  while (1) {
    if ((unsigned int )ln2->next == (unsigned int )l->head) {
      return (1);
    } else {
      __repair_del_27__b1c: /* CIL Label */ 
      {

      }
    }
    if ((unsigned int )ln1 == (unsigned int )ln2) {
      return (0);
    } else {

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
    __repair_swap1_50__b1d: /* CIL Label */ ;
  }
  x = *(argv + 1);
  tmp___0 = strtok(x, " ");
  tmp = (char *)tmp___0;
  newList(& l);
  newNode(& n1);
  newNode(& n2);
  newNode(& n3);
  __repair_del_75__b1e: /* CIL Label */ 
  {

  }
  __repair_swap1_77__b1f: /* CIL Label */ 
  e = l->head;
  __repair_swap1_41__b21: /* CIL Label */ 
  __repair_swap1_76__b20: /* CIL Label */ 
  node = n1;
  __repair_app_60__b22: /* CIL Label */ 
  {
  while ((unsigned int )tmp != (unsigned int )((void *)0)) {
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {

    }
    tmp___1 = strcmp(tmp, "N1");
    if (tmp___1 == 0) {
      __repair_swap1_77__b23: /* CIL Label */ 
      e = l->head;
    } else {

    }
    tmp___2 = strcmp(tmp, "N2");
    if (tmp___2 == 0) {
      node = n2;
    } else {

    }
    tmp___3 = strcmp(tmp, "N3");
    if (tmp___3 == 0) {
      __repair_del_45__b25: /* CIL Label */ 
      {

      }
    } else {
      __repair_swap1_51__b24: /* CIL Label */ 
      if ((unsigned int )tmp != (unsigned int )((void *)0)) {

      } else {
        break;
      }
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
      __repair_swap1_38__b26: /* CIL Label */ ;
    }
    e->next = node;
    __repair_swap1_51__b27: /* CIL Label */ 
    if ((unsigned int )tmp != (unsigned int )((void *)0)) {

    } else {
      break;
    }
    tmp___6 = strtok((void *)0, " ");
    tmp = (char *)tmp___6;
  }
  if (tmp___4 == 0) {
    node = n4;
  } else {

  }
  }
  tmp___7 = hasLoop(l);
  printf(" %d", tmp___7);
  return (0);
}
}
