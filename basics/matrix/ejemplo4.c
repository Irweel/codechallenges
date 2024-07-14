/// Ejemplo 25: se ingresan a la matriz de 3x5 números consecutivos a partir
// del cero y mostramos por pantalla.

// En el caso anterior fue conveniente utilizar la máscara «%3i» por tratarse
// de números que tienen como máximo 2 dígitos.
// Independientemente de la cantidad de dígitos que tenga el elemento,
// siempre tendremos la separación en tres espacios


#include <stdio.h>


#define n 3
#define m 5

int main(){
    int matrix[n][m], i, j, k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matrix[i][j]=k;
            k++;
        }
    }

    for(int i=0; i<n; i++){
        printf("\n");
        for(int j=0; j<m; j++){
            printf("| %3i |", matrix[i][j]);
        }
    }
    printf("\n");
}
