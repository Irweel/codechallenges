// 14. Llene una matriz de 4 X 4 con números de un dado al azar. Muéstrelo y luego
// halle la sumatoria de los números que se encuentran en las filas impares
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
            printf("%3i", x[i][j]);
        }
        printf("\n");
    }
}

void sumar(int x[][n], int sum[]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i%2==0){
                sum[i]=sum[i]+x[i][j];
            }
        }
        printf("%3i", sum[i]);
        printf("\n");
    }
}

int main(){
    int matrix[n][n], sum[n]={0};
    srand(time(NULL));
    generar(matrix);
    sumar(matrix, sum);
    return 0;
}
