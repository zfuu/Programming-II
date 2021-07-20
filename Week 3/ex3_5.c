#include <stdio.h>
#define N 4

void main(){
    double x[N][N], y[N][N], z[N][N];
    int i, j, k;

    FILE *fp_x, *fp_y;

    fp_x = fopen("x.dat","r"); 
    fp_y = fopen("y.dat","r");

    for(i = 0; i < N; i++){ 
        for(j = 0; j < N; j++){
            fscanf(fp_x, "%lf",&x[i][j]);
            fscanf(fp_y, "%lf",&y[i][j]);
        }
    }

    fclose(fp_x);
    fclose(fp_y);

    for(i = 0; i < N; i++){ 
        for(j = 0; j < N; j++){
            for(k = 0; k < N; k++){
                z[i][j] += x[i][k] * y[k][j];    
            }
        }
    }

    for(i = 0; i < N; i++){ 
        for(j = 0; j < N; j++){
            printf("%5.2lf  ", z[i][j]);
        }
        printf("\n");
    }
}