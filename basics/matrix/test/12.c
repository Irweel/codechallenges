// 45. Genere con números al azar del (0 al 9) una matriz cuadrada de N x N,
// muéstrela y halle la sumatoria de la diagonal principal y diagonal inversa.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main(){
    int matrix[N][N], i, j, r;
    int sum_p, sum_i;

    srand(time(NULL));

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            r=rand()%10;
            matrix[i][j]=r;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Sumatoria diagonal Principal:\n");
    for(j=0; j<N; j++){
        for(i=0; i<N; i++){
            printf("+ %d", matrix[i][j]);
            sum_p=sum_p+matrix[i][j];
            j++;
        }
        i++;
    }
    printf("= %d", sum_p);
    printf("\n");
    printf("Sumatoria diagonal invertida:\n");
    for(j=0; j<N; j++){
        for(i=N-1; i>=0; i--){
            printf("+ %d", matrix[i][j]);
            sum_i=sum_i+matrix[i][j];
            j++;
        }
        i--;
    }
    printf("= %d", sum_i);
    printf("\n");
}
