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
void reverse(struct List **l ) 
{ struct Entry *ln1 ;
  struct Entry *ln2 ;
  struct Entry *ln3 ;
  struct Entry *ln4 ;

  {
  if ((unsigned int )((*l)->head)->next == (unsigned int )(*l)->head) {
    return;
  } else {

  }
  ln1 = ((*l)->head)->next;
  ln2 = (((*l)->head)->next)->next;
  ln3 = (*l)->head;
  ln4 = (struct Entry *)((void *)0);
  while ((unsigned int )ln2 != (unsigned int )(*l)->head) {
    __repair_app_37__7: /* CIL Label */ 
    {
    ln4 = ln2->next;
    return;
    }
    ln1->next = ln3;
    ln3 = ln1;
    ln1 = ln2;
    ln2 = ln4;
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
  if (argc < 2) {
    return (0);
  } else {

  }
  newList(& l);
  x = *(argv + 1);
  tmp___0 = strtok(x, " ");
  tmp = (char *)tmp___0;
  while ((unsigned int )tmp != (unsigned int )((void *)0)) {
    if ((int )*(tmp + 0) == 34) {
      continue;
    } else {

    }
    tmp___1 = atoi(tmp);
    insertSort(& l, tmp___1);
    tmp___2 = strtok((void *)0, " ");
    tmp = (char *)tmp___2;
  }
  reverse(& l);
  node = l->head;
  while ((unsigned int )node->next != (unsigned int )l->head) {
    printf("%d ", (node->next)->element);
    node = node->next;
  }
  printf(" %d", l->size);
  return (0);
}
}
