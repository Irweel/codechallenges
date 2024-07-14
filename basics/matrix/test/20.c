// 53. Genere 3 vectores de 4 elementos cada uno con números al azar del 1 al
// 9 y cree una matriz de 3 x 4 que contenga los elementos de los vectores.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4

int main(){
    int v1[n], v2[n], v3[n], i, j;
    int matrix[3][n];

    srand(time(NULL));

    for(i=0; i<n; i++){
        v1[i]=rand()%10;
        v2[i]=rand()%10;
        v3[i]=rand()%10;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==0){
                matrix[i][j]=v1[j];
            }
            else if(i==1){
                matrix[i][j]=v2[j];
                }
            else if(i==2){
                matrix[i][j]=v3[j];
            }
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<n; j++){
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }
}
