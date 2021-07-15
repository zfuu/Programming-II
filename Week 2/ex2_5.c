#include<stdio.h>

int   main()
{
  char *ptr1, *ptr2 = "kj2";

  ptr1 = ptr2;

  while(*ptr2 != '\0')   putchar(*ptr2++);
  while(--ptr2 >= ptr1)  putchar(*ptr2);
  putchar('\n');

  printf("%c", *ptr1);
}
