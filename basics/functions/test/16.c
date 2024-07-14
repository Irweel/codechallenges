// 16. Ingrese a una matriz de 3 X 4 con números al azar (del 0 al 9), muéstrela
// y halle la cantidad de números pares.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 4

void generar(int x[][m]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            x[i][j]=rand()%10;
            printf("%3i", x[i][j]);
        }
        printf("\n");
    }
}

int pares(int x[][m]){
    int i, j, sum=0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(x[i][j]%2==0)
                sum++;
        }
    }
    return sum;
}

int main(){
    int matrix[n][m];
    srand(time(NULL));
    generar(matrix);
    printf("Cantidad de pares %d.\n", pares(matrix));
    return 0;
}
