#include <stdio.h>

// 構造体の定義
struct complex
{
  float r;
  float i;
};

struct complex mk_cmplx(float x, float y);

int main() 
{
  // 宣言・初期化
  struct complex  a={1.0, 0.0};

  printf("complex a = %f + %f i\n",a.r, a.i);

  a = mk_cmplx(2.0, 5.0);
  printf("complex a = %f + %f i\n",a.r, a.i);
  
}

///////////////////
//　構造体型の関数
struct complex mk_cmplx(float x, float y)
{
  struct  complex  temp;

  temp.r = x;
  temp.i = y;

  return temp;
}
