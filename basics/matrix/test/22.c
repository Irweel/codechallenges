// 55. Genere con números al azar del (0 al 9) una matriz cuadrada de N x
// N, muéstrela, halle la transpuesta y muestre el resultado
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main(){
    int matrix[n][n], trans[n][n], i, j, r;

    srand(time(NULL));

    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpuesta:\n");
    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
            trans[i][j]=matrix[j][i];
            printf("%3i", trans[i][j]);
        }
        printf("\n");
    }
}
