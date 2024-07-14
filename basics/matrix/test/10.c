// 43. Genere con números al azar del (0 al 9) una matriz m1 de 3 x 5 y muéstrela.
// Además se pide hallar los promedios por fila y por columna
// (mostrar los resultados).
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 5

int main(){
    int matrix[n][m], i, j, r, prom_f[n];
    float prom_c;

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            prom_f[i]=prom_f[i]+matrix[i][j];
        }
        printf("promedio fila %d: %3i", i+1,  prom_f[i]/5);
        printf("\n");
    }
    for(i=0; i<m; i++){
        prom_c = 0;
        for(j=0; j<n; j++){
            prom_c += matrix[j][i];
        }
        printf("promedio columna  %d: %f", i+1,  prom_c/3);
        printf("\n");
    }
}
