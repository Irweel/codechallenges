// 47. Genere con vocales al azar a una matriz de 3 x 4, muéstrela y cree 4
// vectores que contengan las vocales de la matriz por columna.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 4

int main(){
    char matrix[n][m];
    char v[5]={'a','e','i','o','u'};
    int i, j, r;
    char a[n], b[n], c[n], d[n];

    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%5;
            matrix[i][j]=v[r];
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(j=0; j<m; j++){
        for(i=0; i<n; i++){
            if(j==0){
                a[i]=matrix[i][j];
                printf("%c", a[i]);
            }
            else if(j==1){
                b[i]=matrix[i][j];
                printf("%c", b[i]);
            }
            else if(j==2){
                c[i]=matrix[i][j];
                printf("%c", c[i]);
            }
            else if(j==3){
                d[i]=matrix[i][j];
                printf("%c", d[i]);
            }


        }
        printf("\n");
    }


}
