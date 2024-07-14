// 35. Genere con las vocales al azar una matriz de 3 x 5 y muéstrela.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 5

int main(){
    int  i, j, r;
    char v[]={'a','e','i','o','u'};
    char matrix[n][m];

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%5;
            matrix[i][j]=v[r];
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
}
