# include <stdio.h>

int main ()
{
  double v1, v3;
  int v2;
  
  printf("Input a float number: ");
  scanf("%lf",&v1);
  
  v2 = (int) v1;
  v3 = v1 - v2;

  printf("%lf：正数部%d, 小数部%f\n",v1,v2,v3);
}
