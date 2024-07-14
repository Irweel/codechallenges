// 39. Genere con números al azar del (0 al 9) una matriz de 4 x 4, muéstre-
// la y halle el máximo y el mínimo.
//
// 40. Ídem al anterior pero además deberá mostrar su ubicación (fila, columna)
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 4

int main(){
    int matrix[n][m], i, j, r;
    int max=-1;
    int min=10;
    int fila_x, columna_x;
    int fila_m, columna_m;

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
            if(max<matrix[i][j]){
                max=matrix[i][j];
                fila_x=i;
                columna_x=j;
            }
            if(min>matrix[i][j]){
                min=matrix[i][j];
                fila_m=i;
                columna_m=j;
            }
        }
    }
    printf("max: %d (fila: %d, columna:%d).\n", max, fila_x+1, columna_x+1);
    printf("min: %d (fila: %d, columna:%d).\n", min, fila_m+1, columna_m+1);
}
