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
   struct Entry *parent ;
   struct Entry *left ;
   struct Entry *right ;
   char *value ;
   int color ;
};
struct TreeMap {
   struct Entry *root ;
   int size ;
};
void newEntry(struct Entry **n ) ;
void newTreeMap(struct TreeMap **t ) ;
void getFirstEntry(struct TreeMap **tree , struct Entry **p ) ;
void successor(struct Entry **t , struct Entry **p ) ;
int containsValue(struct Entry *root , char *value ) ;
void buildFromSorted(int level , int lo , int hi , int redLevel , char **value ,
                     struct Entry **res ) ;
void buildTree(int size , char **value , struct Entry **root ) ;
int val_i  ;
extern int ( /* missing proto */  malloc)() ;
void newEntry(struct Entry **n ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(sizeof(struct Entry ));
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  *n = (struct Entry *)tmp;
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  (*n)->parent = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  (*n)->left = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  (*n)->right = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "6\n");
  fflush(_coverage_fout);
  }
  (*n)->color = 1;
  {
  fprintf(_coverage_fout, "7\n");
  fflush(_coverage_fout);
  }
  (*n)->value = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "8\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void newTreeMap(struct TreeMap **t ) 
{ int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "9\n");
  fflush(_coverage_fout);
  }
  tmp = malloc(sizeof(struct TreeMap ));
  {
  fprintf(_coverage_fout, "10\n");
  fflush(_coverage_fout);
  }
  *t = (struct TreeMap *)tmp;
  {
  fprintf(_coverage_fout, "11\n");
  fflush(_coverage_fout);
  }
  (*t)->root = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "12\n");
  fflush(_coverage_fout);
  }
  (*t)->size = 0;
  {
  fprintf(_coverage_fout, "13\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void getFirstEntry(struct TreeMap **tree , struct Entry **p ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "19\n");
  fflush(_coverage_fout);
  }
  *p = (*tree)->root;
  {
  fprintf(_coverage_fout, "20\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )*p != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "17\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "15\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )(*p)->left != (unsigned int )((void *)0)) {
        {
        fprintf(_coverage_fout, "14\n");
        fflush(_coverage_fout);
        }

      } else {
        break;
      }
      {
      fprintf(_coverage_fout, "16\n");
      fflush(_coverage_fout);
      }
      *p = (*p)->left;
    }
  } else {
    {
    fprintf(_coverage_fout, "18\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "21\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void successor(struct Entry **t , struct Entry **p ) 
{ struct Entry *ch ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "40\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )*t == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    }
    *p = (struct Entry *)((void *)0);
    {
    fprintf(_coverage_fout, "23\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "39\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )(*t)->left != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "27\n");
      fflush(_coverage_fout);
      }
      *p = (*t)->right;
      {
      fprintf(_coverage_fout, "28\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "25\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )(*p)->left != (unsigned int )((void *)0)) {
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
        *p = (*p)->left;
      }
      {
      fprintf(_coverage_fout, "29\n");
      fflush(_coverage_fout);
      }
      return;
    } else {
      {
      fprintf(_coverage_fout, "35\n");
      fflush(_coverage_fout);
      }
      *p = (*t)->parent;
      {
      fprintf(_coverage_fout, "36\n");
      fflush(_coverage_fout);
      }
      ch = *t;
      {
      fprintf(_coverage_fout, "37\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "32\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )*p != (unsigned int )((void *)0)) {
          {
          fprintf(_coverage_fout, "31\n");
          fflush(_coverage_fout);
          }
          if ((unsigned int )ch == (unsigned int )(*p)->right) {
            {
            fprintf(_coverage_fout, "30\n");
            fflush(_coverage_fout);
            }

          } else {
            break;
          }
        } else {
          break;
        }
        {
        fprintf(_coverage_fout, "33\n");
        fflush(_coverage_fout);
        }
        ch = *p;
        {
        fprintf(_coverage_fout, "34\n");
        fflush(_coverage_fout);
        }
        *p = (*p)->parent;
      }
      {
      fprintf(_coverage_fout, "38\n");
      fflush(_coverage_fout);
      }
      return;
    }
  }
}
}
extern int ( /* missing proto */  strcmp)() ;
int containsValue(struct Entry *root , char *value ) 
{ struct Entry *e ;
  int cnt ;
  int tmp ;
  struct Entry *p ;
  struct Entry *ch ;
  struct Entry *p___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "73\n");
  fflush(_coverage_fout);
  }
  e = root;
  {
  fprintf(_coverage_fout, "74\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )e != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "44\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "42\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )e->left != (unsigned int )((void *)0)) {
        {
        fprintf(_coverage_fout, "41\n");
        fflush(_coverage_fout);
        }

      } else {
        break;
      }
      {
      fprintf(_coverage_fout, "43\n");
      fflush(_coverage_fout);
      }
      e = e->left;
    }
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
  cnt = 0;
  {
  fprintf(_coverage_fout, "76\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "69\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )e != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "47\n");
      fflush(_coverage_fout);
      }
      if (cnt < 10) {
        {
        fprintf(_coverage_fout, "46\n");
        fflush(_coverage_fout);
        }

      } else {
        break;
      }
    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "70\n");
    fflush(_coverage_fout);
    }
    cnt ++;
    {
    fprintf(_coverage_fout, "71\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )value == (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "49\n");
      fflush(_coverage_fout);
      }
      if ((unsigned int )e->value == (unsigned int )((void *)0)) {
        {
        fprintf(_coverage_fout, "48\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        goto _L;
      }
    } else {
      {
      fprintf(_coverage_fout, "52\n");
      fflush(_coverage_fout);
      }
      _L: /* CIL Label */ 
      tmp = strcmp(value, e->value);
      {
      fprintf(_coverage_fout, "53\n");
      fflush(_coverage_fout);
      }
      if (tmp == 0) {
        {
        fprintf(_coverage_fout, "50\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        {
        fprintf(_coverage_fout, "51\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )e->right != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "57\n");
      fflush(_coverage_fout);
      }
      p = e->right;
      {
      fprintf(_coverage_fout, "58\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "55\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )p->left != (unsigned int )((void *)0)) {
          {
          fprintf(_coverage_fout, "54\n");
          fflush(_coverage_fout);
          }

        } else {
          break;
        }
        {
        fprintf(_coverage_fout, "56\n");
        fflush(_coverage_fout);
        }
        p = p->left;
      }
      {
      fprintf(_coverage_fout, "59\n");
      fflush(_coverage_fout);
      }
      e = p;
    } else {
      {
      fprintf(_coverage_fout, "65\n");
      fflush(_coverage_fout);
      }
      ch = e;
      {
      fprintf(_coverage_fout, "66\n");
      fflush(_coverage_fout);
      }
      p___0 = e->parent;
      {
      fprintf(_coverage_fout, "67\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "62\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )p___0 != (unsigned int )((void *)0)) {
          {
          fprintf(_coverage_fout, "61\n");
          fflush(_coverage_fout);
          }
          if ((unsigned int )p___0->left == (unsigned int )((void *)0)) {
            {
            fprintf(_coverage_fout, "60\n");
            fflush(_coverage_fout);
            }

          } else {
            break;
          }
        } else {
          break;
        }
        {
        fprintf(_coverage_fout, "63\n");
        fflush(_coverage_fout);
        }
        ch = p___0;
        {
        fprintf(_coverage_fout, "64\n");
        fflush(_coverage_fout);
        }
        p___0 = p___0->parent;
      }
      {
      fprintf(_coverage_fout, "68\n");
      fflush(_coverage_fout);
      }
      e = p___0;
    }
  }
  {
  fprintf(_coverage_fout, "77\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
void buildFromSorted(int level , int lo , int hi , int redLevel , char **value ,
                     struct Entry **res ) 
{ int mid ;
  struct Entry *left ;
  struct Entry *middle ;
  int tmp ;
  struct Entry *right ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "92\n");
  fflush(_coverage_fout);
  }
  if (hi < lo) {
    {
    fprintf(_coverage_fout, "78\n");
    fflush(_coverage_fout);
    }
    *res = (struct Entry *)((void *)0);
    {
    fprintf(_coverage_fout, "79\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "80\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "93\n");
  fflush(_coverage_fout);
  }
  mid = (lo + hi) / 2;
  {
  fprintf(_coverage_fout, "94\n");
  fflush(_coverage_fout);
  }
  left = (struct Entry *)((void *)0);
  {
  fprintf(_coverage_fout, "95\n");
  fflush(_coverage_fout);
  }
  if (lo < mid) {
    {
    fprintf(_coverage_fout, "81\n");
    fflush(_coverage_fout);
    }
    buildFromSorted(level + 1, lo, mid - 1, redLevel, value, & left);
  } else {
    {
    fprintf(_coverage_fout, "82\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "96\n");
  fflush(_coverage_fout);
  }
  newEntry(& middle);
  {
  fprintf(_coverage_fout, "97\n");
  fflush(_coverage_fout);
  }
  tmp = val_i;
  {
  fprintf(_coverage_fout, "98\n");
  fflush(_coverage_fout);
  }
  val_i ++;
  {
  fprintf(_coverage_fout, "99\n");
  fflush(_coverage_fout);
  }
  middle->value = *(value + tmp);
  {
  fprintf(_coverage_fout, "100\n");
  fflush(_coverage_fout);
  }
  if (level == redLevel) {
    {
    fprintf(_coverage_fout, "83\n");
    fflush(_coverage_fout);
    }
    middle->color = 0;
  } else {
    {
    fprintf(_coverage_fout, "84\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "101\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )left != (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "85\n");
    fflush(_coverage_fout);
    }
    middle->left = left;
    {
    fprintf(_coverage_fout, "86\n");
    fflush(_coverage_fout);
    }
    left->parent = middle;
  } else {
    {
    fprintf(_coverage_fout, "87\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "102\n");
  fflush(_coverage_fout);
  }
  if (mid < hi) {
    {
    fprintf(_coverage_fout, "88\n");
    fflush(_coverage_fout);
    }
    buildFromSorted(level + 1, mid + 1, hi, redLevel, value, & right);
    {
    fprintf(_coverage_fout, "89\n");
    fflush(_coverage_fout);
    }
    middle->right = right;
    {
    fprintf(_coverage_fout, "90\n");
    fflush(_coverage_fout);
    }
    right->parent = middle;
  } else {
    {
    fprintf(_coverage_fout, "91\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "103\n");
  fflush(_coverage_fout);
  }
  *res = middle;
  {
  fprintf(_coverage_fout, "104\n");
  fflush(_coverage_fout);
  }
  return;
}
}
void buildTree(int size , char **value , struct Entry **root ) 
{ int level ;
  int m ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "109\n");
  fflush(_coverage_fout);
  }
  level = 0;
  {
  fprintf(_coverage_fout, "110\n");
  fflush(_coverage_fout);
  }
  m = size - 1;
  {
  fprintf(_coverage_fout, "111\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "106\n");
    fflush(_coverage_fout);
    }
    if (m >= 0) {
      {
      fprintf(_coverage_fout, "105\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "107\n");
    fflush(_coverage_fout);
    }
    level ++;
    {
    fprintf(_coverage_fout, "108\n");
    fflush(_coverage_fout);
    }
    m = m / 2 - 1;
  }
  {
  fprintf(_coverage_fout, "112\n");
  fflush(_coverage_fout);
  }
  buildFromSorted(0, 0, size - 1, level, value, root);
  {
  fprintf(_coverage_fout, "113\n");
  fflush(_coverage_fout);
  }
  return;
}
}
extern int ( /* missing proto */  printf)() ;
void printTree(struct Entry *root ) 
{ 

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "116\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )root == (unsigned int )((void *)0)) {
    {
    fprintf(_coverage_fout, "114\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "115\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "117\n");
  fflush(_coverage_fout);
  }
  printf("%s ", root->value);
  {
  fprintf(_coverage_fout, "118\n");
  fflush(_coverage_fout);
  }
  printTree(root->left);
  {
  fprintf(_coverage_fout, "119\n");
  fflush(_coverage_fout);
  }
  printTree(root->right);
  {
  fprintf(_coverage_fout, "120\n");
  fflush(_coverage_fout);
  }
  return;
}
}
extern int ( /* missing proto */  strtok)() ;
extern int ( /* missing proto */  strlen)() ;
extern int ( /* missing proto */  strcpy)() ;
int main(int argc , char **argv ) 
{ struct TreeMap *t ;
  char *x ;
  char *input[20] ;
  int i ;
  char *find ;
  char *tmp ;
  int tmp___0 ;
  int len ;
  int tmp___1 ;
  int tmp___2 ;
  char *tkn ;
  int tmp___3 ;
  int len___0 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  struct Entry *root ;
  int res ;
  int tmp___7 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/fanl/Documents/lisa/dataset/divya/treemap/treemap1/src/./coverage.path",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "135\n");
  fflush(_coverage_fout);
  }
  if (argc < 2) {
    {
    fprintf(_coverage_fout, "121\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "122\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "136\n");
  fflush(_coverage_fout);
  }
  newTreeMap(& t);
  {
  fprintf(_coverage_fout, "137\n");
  fflush(_coverage_fout);
  }
  x = *(argv + 1);
  {
  fprintf(_coverage_fout, "138\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "139\n");
  fflush(_coverage_fout);
  }
  tmp___0 = strtok(x, " ");
  {
  fprintf(_coverage_fout, "140\n");
  fflush(_coverage_fout);
  }
  tmp = (char *)tmp___0;
  {
  fprintf(_coverage_fout, "141\n");
  fflush(_coverage_fout);
  }
  tmp___1 = strlen(tmp);
  {
  fprintf(_coverage_fout, "142\n");
  fflush(_coverage_fout);
  }
  len = tmp___1 + 1;
  {
  fprintf(_coverage_fout, "143\n");
  fflush(_coverage_fout);
  }
  tmp___2 = malloc((unsigned int )len * sizeof(char ));
  {
  fprintf(_coverage_fout, "144\n");
  fflush(_coverage_fout);
  }
  find = (char *)tmp___2;
  {
  fprintf(_coverage_fout, "145\n");
  fflush(_coverage_fout);
  }
  strcpy(find, tmp);
  {
  fprintf(_coverage_fout, "146\n");
  fflush(_coverage_fout);
  }
  tmp___3 = strtok((void *)0, " ");
  {
  fprintf(_coverage_fout, "147\n");
  fflush(_coverage_fout);
  }
  tkn = (char *)tmp___3;
  {
  fprintf(_coverage_fout, "148\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "125\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )tkn != (unsigned int )((void *)0)) {
      {
      fprintf(_coverage_fout, "123\n");
      fflush(_coverage_fout);
      }

    } else {
      break;
    }
    {
    fprintf(_coverage_fout, "126\n");
    fflush(_coverage_fout);
    }
    if ((int )*(tkn + 0) == 34) {
      continue;
    } else {
      {
      fprintf(_coverage_fout, "124\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "127\n");
    fflush(_coverage_fout);
    }
    tmp___4 = strlen(x);
    {
    fprintf(_coverage_fout, "128\n");
    fflush(_coverage_fout);
    }
    len___0 = tmp___4 + 1;
    {
    fprintf(_coverage_fout, "129\n");
    fflush(_coverage_fout);
    }
    tmp___5 = malloc((unsigned int )len___0 * sizeof(char ));
    {
    fprintf(_coverage_fout, "130\n");
    fflush(_coverage_fout);
    }
    input[i] = (char *)tmp___5;
    {
    fprintf(_coverage_fout, "131\n");
    fflush(_coverage_fout);
    }
    strcpy(input[i], tkn);
    {
    fprintf(_coverage_fout, "132\n");
    fflush(_coverage_fout);
    }
    i ++;
    {
    fprintf(_coverage_fout, "133\n");
    fflush(_coverage_fout);
    }
    tmp___6 = strtok((void *)0, " ");
    {
    fprintf(_coverage_fout, "134\n");
    fflush(_coverage_fout);
    }
    tkn = (char *)tmp___6;
  }
  {
  fprintf(_coverage_fout, "149\n");
  fflush(_coverage_fout);
  }
  val_i = 0;
  {
  fprintf(_coverage_fout, "150\n");
  fflush(_coverage_fout);
  }
  root = t->root;
  {
  fprintf(_coverage_fout, "151\n");
  fflush(_coverage_fout);
  }
  buildTree(i, input, & root);
  {
  fprintf(_coverage_fout, "152\n");
  fflush(_coverage_fout);
  }
  tmp___7 = containsValue(root, find);
  {
  fprintf(_coverage_fout, "153\n");
  fflush(_coverage_fout);
  }
  res = tmp___7;
  {
  fprintf(_coverage_fout, "154\n");
  fflush(_coverage_fout);
  }
  printf("%d", res);
  {
  fprintf(_coverage_fout, "155\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
