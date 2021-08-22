#include<stdio.h> 
#include<math.h> 

float x=2.0, y=2.0; 
void circle1(float t){

    x = sin(t); 
    y = cos(t); 

}
int main(){
    float theta=1.57; 
    circle1 (theta); 
    printf("%f\n", y); 
    
    return 0; 

}
