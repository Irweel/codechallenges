// 15. Llene una matriz de 4 X 4 con números de un dado al azar. Muéstrelo
// y luego halle la sumatoria de los números que se encuentran en las
// columnas pares.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4

void generar(int x[][n]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            x[i][j]=rand()%10;
            printf("%3i ", x[i][j]);
        }
        printf("\n");
    }
}

void columnas(int x[][n]){
    int i, j, sum[n]={0};
    for(j=0; j<n; j++){
        if(j%2!=0){
            for(i=0; i<n; i++){
                sum[j]=sum[j]+x[i][j];
            }
        }
        printf("%3i ", sum[j]);
    }
    printf("\n");
}

int main(){
    int matrix[n][n];
    srand(time(NULL));
    generar(matrix);
    columnas(matrix);
    return 0;
}
