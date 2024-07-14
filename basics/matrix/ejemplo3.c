// Ejemplo 24: la cantidad de números negativos de la matriz.
//


#include <stdio.h>

#define n 3
#define m 5

int main(){
    int matrix[n][m], i, j, can=0;
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
            if(matrix[i][j]<0){
                can++;
            }
        }
    }
    printf("La cantidad de negativos es:  %d.\n", can);
}
