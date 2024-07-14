// 18. Ingrese a una matriz de 3 X 4 con números al azar binarios (0 y 1),
// muéstrela y cree otra matriz traspuesta, muéstrela.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 4

void generar(int matrix[n][m]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            matrix[i][j]=rand()%2;
            printf("%3i", matrix[i][j]);
        }
        printf("\n");
    }
}
void transpuesta(int matrix[n][m], int trans[m][n]){
    int i, j;
    for(j=0; j<m; j++){
        for(i=0; i<n; i++){
            trans[j][i]=matrix[i][j];
            printf("%3i", trans[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int matrix[n][m];
    int trans[m][n];
    srand(time(NULL));
    printf("Matrix binaria:\n");
    generar(matrix);
    printf("Transpuesta:\n");
    transpuesta(matrix,trans);
    return 0;
}
