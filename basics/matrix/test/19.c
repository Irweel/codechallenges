// 52. Genere con números al azar del (0 al 9) una matriz cuadrada de N x
// N y halle la cantidad de números menores a 4 y entre 4 y 7.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main(){
    int matrix[n][n], i, j, r, sum=0;

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Menores a 4:\n");

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(matrix[i][j] <= 4){
                printf("%3i", matrix[i][j]);
                sum++;
            }
        }
        printf("\n");
    }

    printf("Total: %d.\n", sum);
    printf("\n");
    printf("Entre 4 y 7:\n");

    sum=0;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(matrix[i][j] >= 4 && matrix[i][j] <=7 ){
                printf("%3i", matrix[i][j]);
                sum++;
            }
        }
        printf("\n");
    }
    printf("Total: %d.\n", sum);
}
