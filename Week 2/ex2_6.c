#include <stdio.h>

int  increment(int *a){
    return ++(*a);
}

int   main()
{
  int a;
  a=0;
  increment(&a);
  printf("a=%d\n", a);
}
