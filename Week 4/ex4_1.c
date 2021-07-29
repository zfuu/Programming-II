#include <stdio.h>

struct complex 
{
  float r;
  float i;
};

int main() 
{
  struct complex  a={1.0, 0.0}, b;

  printf("complex a = %f + %f i\n",a.r, a.i);

  // 代入・参照
  a.r =1.1;
  a.i =2.2;
  printf("complex a = %f + %f i\n",a.r, a.i);
  
  b = a; // 構造体aを構造体bにコピー
  printf("complex b = %f + %f i\n",b.r, b.i);

}
