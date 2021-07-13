#include <stdio.h>
#include <math.h>

extern int a;

int increment(){
    int add;
    add = a+1;
    a++;

    return add;
}

int a;

int main(){
    int b;
    a = 2;
    printf("a: %d\n", a);
    b = increment(a);
    printf("b: %d\n", b);
    printf("a: %d\n", a);

    return 0;

}

