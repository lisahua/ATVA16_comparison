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
  __repair_app_23__1050: /* CIL Label */ 
  {
  newNode(& (*l)->head);

  }
  ((*l)->head)->next = (*l)->head;
  __repair_app_3__1051: /* CIL Label */ 
  {
  return;
  newNode(& (*l)->head);
  }
}
}
void newNode(struct Entry **n ) 
{ int tmp ;

  {
  __repair_app_47__1052: /* CIL Label */ 
  {
  tmp = malloc(sizeof(struct Entry ));

  }
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
      __repair_del_26__1053: /* CIL Label */ 
      {

      }
    }
    __repair_del_35__1054: /* CIL Label */ 
    {

    }
    __repair_app_5__1055: /* CIL Label */ 
    {
    if ((unsigned int )ln1 == (unsigned int )ln2) {
      return (0);
    } else {

    }
    return;
    }
    count ++;
  }
  __repair_app_9__1056: /* CIL Label */ 
  {
  exit(1);
  return;
  }
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
    __repair_swap1_52__1057: /* CIL Label */ 
    node = n3;
  }
  x = *(argv + 1);
  tmp___0 = strtok(x, " ");
  tmp = (char *)tmp___0;
  newList(& l);
  newNode(& n1);
  __repair_swap1_65__1059: /* CIL Label */ 
  __repair_swap1_65__1058: /* CIL Label */ 
  if (tmp___3 == 0) {
    __repair_swap1_45__105a: /* CIL Label */ ;
  } else {

  }
  newNode(& n3);
  newNode(& n4);
  status = 0;
  e = l->head;
  while ((unsigned int )tmp != (unsigned int )((void *)0)) {
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {

    }
    __repair_swap1_50__105b: /* CIL Label */ 
    node = n2;
    if (tmp___1 == 0) {
      node = n1;
    } else {
      __repair_del_49__105c: /* CIL Label */ 
      {

      }
    }
    tmp___2 = strcmp(tmp, "N2");
    if (tmp___2 == 0) {
      __repair_swap1_60__105d: /* CIL Label */ 
      tmp___1 = strcmp(tmp, "N1");
    } else {

    }
    tmp___3 = strcmp(tmp, "N3");
    __repair_swap1_80__105f: /* CIL Label */ 
    __repair_swap1_80__105e: /* CIL Label */ 
    newNode(& n2);
    tmp___4 = strcmp(tmp, "N4");
    if (tmp___4 == 0) {
      node = n4;
    } else {
      __repair_del_55__1063: /* CIL Label */ 
      __repair_del_55__1062: /* CIL Label */ 
      __repair_del_55__1061: /* CIL Label */ 
      __repair_del_55__1060: /* CIL Label */ 
      {

      }
    }
    tmp___5 = strcmp(tmp, "H");
    if (tmp___5 == 0) {
      node = l->head;
    } else {

    }
    e->next = node;
    __repair_del_71__1064: /* CIL Label */ 
    {

    }
    tmp___6 = strtok((void *)0, " ");
    tmp = (char *)tmp___6;
  }
  tmp___7 = hasLoop(l);
  printf(" %d", tmp___7);
  return (0);
}
}
