#include<stdio.h> 
#include<math.h> 


void circle2( float t, float *xp, float *yp){

    (*xp) = sin(t); 
    (*yp) = cos(t);

} 
int main(){
    float theta=1.57; 
    float x=2.0, y=2.0; 
    circle2(theta, &x, &y); 
    
    printf("%f\n",y); 
    return 0; 



}
