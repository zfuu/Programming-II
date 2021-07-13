#include <stdio.h>
#include <math.h>

int increment(int a){
    int add;
    add = a+1;
    a++;

    return add;
}

int main(){
    int a, b;
    a = 2;
    printf("a: %d\n", a);
    b = increment(a);
    printf("b: %d\n", b);
    printf("a: %d\n", a);

    return 0;

}

