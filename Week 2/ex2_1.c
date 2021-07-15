#include <stdio.h>

int increment(int *a);

int main(){
    int a, b;
    a = 2;
    printf("A: a=%d\n", a);

    b = increment(&a);
    printf("B: b=%d\n", b);
    printf("C: a=%d\n", a);
}

int increment(int *a){
    return ++(*a);
}