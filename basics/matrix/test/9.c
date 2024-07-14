// 42. Genere con números al azar del (0 al 9) dos matrices de 4 x 4, muéstrelas
// y halle la suma en una nueva matriz.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 4

int main(){
    int matrix[n][m], matriz[n][m], i, j, r;
    int sum[n][m];

    srand(time(NULL));

    printf("Matriz A: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%10;
            matriz[i][j]=r;
            printf("%3i", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Suma A+B: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum[i][j]=matrix[i][j]+matriz[i][j];
            printf("%3i", sum[i][j]);
        }
        printf("\n");
    }
}
