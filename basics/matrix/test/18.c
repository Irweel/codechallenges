// 51. Genere con números al azar del (0 al 9) una matriz cuadrada de N x
// N y halle la sumatoria de los números en columnas pares.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main(){
    int matrix[n][n], i, j, r, col[n]={0}, sum;

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(j=0; j<n; j++){
        if(j%2!=0){
            sum=0;
            for(i=0; i<n; i++){
                col[i]=matrix[i][j];
                printf("+%3i", col[i]);
                sum=sum+col[i];
            }
            printf(" = %d.", sum);
            printf("\n");
        }
    }
}
