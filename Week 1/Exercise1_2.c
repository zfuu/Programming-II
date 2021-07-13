#include <stdio.h>
#include <math.h>

float add_sqrt(float a, float b){
    return sqrt(a) + sqrt(b);
}

int main(){
    float a, b, sqr;

    a = 2.0;
    b = 3.0;

    // sqr = sqrt(a) + sqrt(b);
    printf("Ans = %f\n", add_sqrt(a,b));

    return 0;
}

