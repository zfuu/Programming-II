# include <stdio.h>

int mystery (unsigned int   bits);

int main ()
{
  unsigned int x;
  printf ("Enter an 8bits-integer: ");
  scanf ("%u", &x);
  printf ("The result is %d\n",mystery(x));
}

int mystery (unsigned int  bits)
{
  unsigned int i, mask = 1 << 7, total=0;
  for (i=1; i<=8; ++i, bits=bits<<1){
    if ((bits & mask) == mask)  ++total;

    // 変数の変化を知りたい場合は、↓の行のコメント "//" を外してみよう
    printf("%d %d %d　%d\n",i,bits, bits&mask, total);

  }
  return  (total % 2 == 0)? 1: 0;
}

