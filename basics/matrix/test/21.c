// 54. Genere 4 vectores de tamaño 5 con vocales al azar y cree una matriz
// de 5 X 4 que contenga las vocales de los vectores.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main(){
    char v1[n], v2[n], v3[n], v4[n];
    char vocales[]={'a','e','i','o','u'};
    int r, i, j;
    char matrix[4][n];

    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%5;
        v1[i]=vocales[r];
        r=rand()%5;
        v2[i]=vocales[r];
        r=rand()%5;
        v3[i]=vocales[r];
        r=rand()%5;
        v4[i]=vocales[r];
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
            else if(i==3){
                matrix[i][j]=v4[j];
            }
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<n; j++){
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}
