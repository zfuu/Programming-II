#include <stdio.h>

int m(int a, int b);
int main(){
    int x=7, y=3;

    printf("%d", m(x,y));

    return 0;
}

int m(int a, int b){
    
    if (b==1){
        return a;
    }else{
        return a + m(a, b-1);
    }
}