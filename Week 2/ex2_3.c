#include <stdio.h>

main()
{
  int i;
  int alpha[]={1,2,3,4,5};
  printf("Base-addr= %u. \n", alpha);
  for (i=0;i<5;i++)
    {
      printf("%d th element addr= %u. value = %d\n", i, &alpha[i], *(alpha + i));
    }
    printf("%d\n", sizeof(int));
} 
