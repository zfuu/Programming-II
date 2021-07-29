#include <stdio.h>

//　構造体の定義
struct world
{
  float x;
  float y;
  float z;
};

struct line
{
  struct world s;
  struct world e;
};

int main() 
{
  //line型構造体の変数l1を宣言・初期化
  struct line l1;

  //line型構造体のポインタ変数 lptrを宣言
  struct line *lptr;

  //代入処理
  l1.s.x = 1.0;
  l1.s.y = 2.0;
  l1.s.z = 3.0;
  printf("%f %f %f \n",l1.s.x, l1.s.y, l1.s.z);

  //構造体のアドレスをコピー
  lptr = &l1;
	
  //構造体のアドレスを使った代入処理
  lptr->s.x =4.0;
  lptr->s.y =5.0;
  lptr->s.z =6.0;
  
  printf("%f %f %f \n",l1.s.x, l1.s.y, l1.s.z);

}

