// Ejemplo 21: cómo agregar números enteros por teclado a una matriz llamada
// «matriz» de 3 filas por 5 columnas
// Ejemplo 22: cómo mostrar por pantalla de modo prolijo (fila y columna) la
// matriz que fue ingresada en el ejemplo anterior.



#include <stdio.h>

#define n 3
#define m 5

int main(){
    int matrix[n][m], i, j;
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
}
