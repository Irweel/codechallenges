// 44. Genere con números al azar del (0 al 9) una matriz m1 de 10 x 6,
// muéstrela y halle los promedios por fila (guardar dichos promedios
// en un nuevo vector v1 de 10 elementos).
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 10
#define m 6

int main(){
    int matrix[n][m], i, j, r;
    float fila[n]={0};

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            fila[i]=fila[i]+matrix[i][j];
        }
        printf("%f", fila[i]/6);
        printf("\n");
    }

}
