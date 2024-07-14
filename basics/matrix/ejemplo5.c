// Ejemplo 26: Crear una matriz de 4 x 4 con las vocales A, E, I, O, U al azar y
// mostrar por pantalla

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 4

int main(){
    char matrix[n][m];
    char v[]={'a','e','i','o','u'};
    int i, j, k;
    srand(time(NULL));
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<m; j++){
            k=rand()%5;
            matrix[i][j]=v[k];
            printf(" %c ", matrix[i][j]);
        }
    }
    printf("\n");
}
