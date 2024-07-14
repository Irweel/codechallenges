// 50. Genere con números al azar del (0 al 9) una matriz cuadrada de N x
// N y halle la sumatoria de los números en filas impares
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main(){
    int matrix[n][n], i, j, r, sum[n]={0}, tot=0;

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<n; i++){
       if( i%2 == 0 ){
            for(j=0; j<n; j++){
                printf(" + %d ", matrix[i][j]);
                sum[i]=sum[i]+matrix[i][j];
            }
            printf("= %3i ", sum[i]);
            printf("\n");
        }
    }
    for(i=0; i<n; i++){
        tot=tot+sum[i];
    }
    printf("Total: %d. \n", tot);
}
