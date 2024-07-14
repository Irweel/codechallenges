// 38. Genere con números al azar del (0 al 9) una matriz de 4 x 4, muéstrela
// y halle el promedio.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 4

int main(){
    int matrix[n][m];
    int i, j, r;
    float prom=0;

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%10;
            matrix[n][m]=r;
            printf("%3i", matrix[n][m]);
            prom=prom+matrix[n][m];
        }
        printf("\n");
    }
    prom=prom/16;

    printf("promedio test: %f \n", prom);

}
