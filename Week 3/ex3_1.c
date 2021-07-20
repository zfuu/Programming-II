# include <stdio.h>

int main ()
{
  unsigned int x=0;
  int y1=0,y2=0;
  printf ("Enter an 8bits-POSITIVE-integer: ");

  scanf ("%d", &x);

  y1 = ~x;
  y2 = y1 + 1;

  printf("正数%d の負の数は、 %d(2の補数)\n",x,y2);
}
