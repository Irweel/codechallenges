// 39. Genere con números al azar del (0 al 9) una matriz de 4 x 4, muéstre-
// la y halle el máximo y el mínimo.
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
            }
            if(min>matrix[i][j]){
                min=matrix[i][j];
            }
        }
    }
    printf("max: %d, min: %d \n", max, min);

}
