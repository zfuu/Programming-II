#include <stdio.h>

//　構造体の定義
struct complex
{
  float r;
  float i;
};

void mk_cmplx2(struct complex *c, float x, float y);

int main() 
{
  // 宣言・初期化
  struct complex  a={1.0, 0.0};
  printf("complex a = %f + %f i\n",a.r, a.i);

  mk_cmplx2(&a, 1.0, 2.0);
  printf("complex a = %f + %f i\n",a.r, a.i);
  
}

///////////////////
//　構造体型の関数
void mk_cmplx2(struct complex *c, float x, float y)
{
  c->r = x;
  c->i = y;
//   (*c).r = x;
//   (*c).i = y;
}
