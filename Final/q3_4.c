#include<stdio.h> 

int mystery (unsigned char bits); 
int main(){

    int x; 
    printf("Enter an 8-bits-integer: "); 
    scanf ("%d", &x); 
    printf("The result is %d\n", mystery((unsigned char)x)); 
    return 0; 

} 

int mystery (unsigned char bits){
    unsigned char i, mask=1<<7, total = 0; 

    for (i=1; i<=8; i++, bits=bits<<1) 
        if ((bits & mask) == mask) ++total; 
    
    return total % 2 == 0? 1: 0; 
}