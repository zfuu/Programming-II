#include <stdio.h>
#include <math.h>

int factorial(int);

main ()
{
  int i;
  for (i=1; i<=4; i++)
    printf ("%2d! = %d\n", i, factorial(i));
}


int factorial (int n)
{
  if (n <= 1)
    return 1;
  else
    return (n * factorial(n-1));
}

