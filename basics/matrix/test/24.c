// 56. Tenemos las matrices A
// 3 5 -10 8
// 0 -9 8 5
// 7 4 14 11
// 1 0 3 -2
//
// 57. Tomando en cuenta la matriz A del ejercicio anterior y el siguiente
// vector columna X:
// 1
// -2
// 6
// 3
// Efectúe y muestre las siguientes operaciones:
// a. AX
// b. 3A2X
// c. (A+AT)2X
// d. (X+2X)A
//

#include <stdio.h>

#define n 4

int main(){
    int a[n][n]={{3, 5, -10, 8},{ 0, -9, 8, 5},{ 7, 4, 14, 11},{ 1, 0, 3, -2}};
    int col[n]={1,-2,6,3};
    int i, j, k;
    int one[n]={0}, two[n][n], tri[n]={0}, four[n][n], temp[n][n];
    int ten[n];
    int trans[n][n];

    int cer[n][n], ve[n][n], za[n], xd[n][n]={0};

    printf("Matrix A: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%3i ", a[i][j]);
        }
        printf("\n");
    }
    printf("Vector Columna X\n");
    for(i=0; i<n; i++){
        for(j=0; j<1; j++){
            printf("%3i ", col[i]);
        }
        printf("\n");
    }
    printf("Vector Columna AX\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            temp[i][j]=a[i][j]*col[j];
            one[i]=one[i]+temp[i][j];
        }
        printf("%3i ", one[i]);
        printf("\n");
    }
    printf("Vector 3A2X\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            two[i][j]=a[i][j]*3;
        }
        for(j=0; j<1; j++){
            ten[i]=col[i]*2;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            four[i][j]=two[i][j]*ten[j];
            tri[i]=tri[i]+four[i][j];
        }
        printf("%3i ", tri[i]);
        printf("\n");
    }

// c. (A+AT)2X

   printf("Vector (A+AT)2X\n");

// Transpuesta + A primero

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            trans[i][j]=a[j][i];
            cer[i][j]=a[i][j]+trans[i][j];
            //printf("%3i ", trans[i][j]);
        }
       //  printf("\n");
    }

// GRAN PAPUSA
// A^2 es igual a A* A. para multiplicar matrices estas tienen que ser cuadradas(nxn)
// y se multiplica fila por columna y luego se suman los resultados

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            for(k=0; k<n; k++){
                ve[i][j]+=cer[i][k]*cer[j][k];
            }
        }
       // printf("\n");
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
                printf("%3i ", ve[i][j]);
        }
        printf("\n");
    }
}
