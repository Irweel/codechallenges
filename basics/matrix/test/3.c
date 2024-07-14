// 36. Ingrese un valor n y luego un valor m, a continuación generar con
// números al azar del (0 al 9) una matriz de n x m y muéstrela. Nota:
// definir como constantes max_filas y max_columnas para declarar la
// matriz en memoria.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int max_filas=5;
    int max_columnas=5;
    int n, m, i, j, r;
    srand(time(NULL));
    printf("Ingrese filas: ");
    scanf("%d", &n);
    printf("Ingrese columnas: ");
    scanf("%d", &m);
    if(n<max_filas || m<max_columnas){
         int matrix[n][m];
         for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                r=rand()%10;
                matrix[i][j]=r;
                printf("%d", matrix[i][j]);
            }
            printf("\n");
         }
    }
    else{
        printf("nooo\n");
    }

}
