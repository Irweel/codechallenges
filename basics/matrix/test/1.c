// Genere con números al azar del (0 al 9) una matriz de 3 x 3 y muéstrela.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 3

int main(){
    int matrix[n][m], i, j, r;
    srand(time(NULL));

    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<n; j++){
            r=rand()%10;
            matrix[i][j]=r;

            printf("|%d|", matrix[i][j]);

        }
    }
    printf("\n");
}
