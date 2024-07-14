// 48. Genere con números al azar del (0 al 9) una matriz cuadrada de N x N
// y halle la sumatoria de sus bordes. (no repetir la suma de sus vértices).
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main(){
    int matrix[n][n], i, j, r;
    int vertices[4];
    int sum=0;

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++){
        if(i==0 || i==n-1 ){
            for(j=0; j<n; j++){
                if(j==0 || j==n-1 ){
                    vertices[i]=matrix[i][j];
                    printf("+ %d ", vertices[i]);
                    sum=sum+vertices[i];
                }
            }
        }
    }

    printf("= %d", sum);
    printf("\n");
}
