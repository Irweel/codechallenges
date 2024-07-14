// Ejemplo 23: la sumatoria de todos los números de la matriz

#include <stdio.h>

#define n 3
#define m 5

int main(){
    int matrix[n][m], i, j, sum=0;
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("\n Ingrese un numero: ");
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i=0; i<n; i++){
        printf("\n");
        for(j=0; j<m; j++){
            printf("| %d |", matrix[i][j]);
        }
    }
    printf("\n");
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum=sum+matrix[i][j];
        }
    }
    printf("La suma de toda la matriz da %d.\n", sum);
}
