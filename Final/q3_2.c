#include <stdio.h>

int fibonacci(int n);
int main(){
    int m;
    scanf("%d",&m);
    printf("Fib(%d) = %d", m, fibonacci(m));
    return 0;
}

int fibonacci(int n){
    if (n == 0 || n == 1){
        return 1;
    }else{
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}