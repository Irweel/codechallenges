// 41. Escriba un programa que genere una matriz de N x M con números
// al azar (del 1 al 9) y permita ingresar por teclado un escalar para efectuar
// el producto con la matriz. La matriz resultante deberá ser un
// nueva y mostrarla.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 4

int main(){
    int matrix[n][m], i, j, r, x;
    int prod;

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Ingrese un escalar para efectuar el producto con la matriz:");
    scanf("%d", &x);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            prod=x*matrix[i][j];
            printf("%3i", prod);
        }
        printf("\n");
    }
}
