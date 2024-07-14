// 17. Ingrese a una matriz de 4 X 4 con números al azar (del 0 al 9), muéstrela
// y cree 4 vectores conteniendo las filas de la matriz, muétrelos
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 4

void generar(int x[][m]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            x[i][j]=rand()%10;
            printf("%3i", x[i][j]);
        }
        printf("\n");
    }
}
void fila(int x[][m], int y[], int row){
    int j;
        for(j=0; j<n; j++){
            y[j]=x[row][j];
            printf("%3i", y[j]);
    }
}

int main(){
    int matrix[n][m];
    int a[m], b[m], c[m], d[m];
    int indx=0;
    srand(time(NULL));
    generar(matrix);
    printf("A: ");
    fila(matrix, a, 0);
    printf("\n");
    printf("B: ");
    fila(matrix, b, 1);
    printf("\n");
    printf("C: ");
    fila(matrix, c, 2);
    printf("\n");
    printf("D: ");
    fila(matrix, d, 3);
    printf("\n");
    return 0;
}
