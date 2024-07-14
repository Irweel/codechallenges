// 37. Genere con números al azar del (0 al 9) una matriz de N x M, muéstrela
// y halle la sumatoria.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 5

int main(){
    int matrix[n][m],i,j,r;
    int suma=0;

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            suma=suma+matrix[i][j];
        }
    }
    printf("La suma de todos los numeros es: %d.\n", suma);
}
