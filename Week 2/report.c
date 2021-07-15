#include <stdio.h>

int main(){

    int mat[3][3] = {1,2,3,4,5,6,7,8,9};

    printf("Base-addr= %u. \n", mat);
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
        printf("element %d, %d, addr= %u, value = %d \n", i, j,  &mat[i][j], *&mat[i][j]);

        }
        
    }

    // printf("%u, %d\n", *(mat+2)+1, *(*(mat+2)+1) );
    printf("%u, %d\n", *(mat+7));

    return 0;

}