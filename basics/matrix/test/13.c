// 46. Genere con números al azar del (0 al 9) una matriz de 3 x 4, muéstre-
// la y cree 3 vectores que contengan el contenido de la matriz por fila.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 4

int main(){
    int matrix[n][m], i, j, r;
    char vector[n]={'\0'};

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
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            vector[i]=matrix[i][j];
            printf("%d", vector[i]);
        }
        printf("\n");
    }
}
