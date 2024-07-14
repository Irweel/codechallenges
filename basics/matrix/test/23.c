// 56. Tenemos las matrices A y B:
// A
// 3 5 -10 8
// 0 -9 8 5
// 7 4 14 11
// 1 0 3 -2
// B
// 10 0 -3 -8
// 20 1 4 5
// 17 -4 4 9
// 5 1 9 11
// Efectúe y muestre las siguientes operaciones:
// a. 2A-B
// b. (A+B)A (opcional)
// c. A2+B2
// d. (A-B)

#include <stdio.h>

#define n 4

int main(){
    int a[n][n]={{3, 5, -10, 8},{ 0, -9, 8, 6},{ 7, 4, 14, 11},{ 1, 0, 3, -2}};
    int b[n][n]={{10, 0, -3, -8},{ 20, 1, 4, 5},{ 17, -4, 4, 9},{ 5, 1, 9, 11}};
    int  temp[n][n]={0}, one[n][n], two[n][n], tri[n][n], four[n][n], fiv[n][n];
    int i, j;


    printf("A:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%3i ", a[i][j]);
        }
        printf("\n");
    }

    printf("b:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%3i ", b[i][j]);
        }
        printf("\n");
    }
    printf("a) 2A-B:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            temp[i][j]=a[i][j]*2;
            one[i][j]=temp[i][j]-b[i][j];
            printf("%3i ", one[i][j]);
        }
        printf("\n");
    }
    printf("b) (A+B)A:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            temp[i][j]=a[i][j]+b[i][j];
            two[i][j]=temp[i][j]*a[i][j];
            printf("%3i ", two[i][j]);
        }
        printf("\n");
    }
    printf("c) A2+B2:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            temp[i][j]=a[i][j]*2;
            tri[i][j]=temp[i][j]+b[i][j]*2;
            printf("%3i ", tri[i][j]);
        }
        printf("\n");
    }
    printf("d) (A-B)2:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            temp[i][j]=a[i][j]-b[i][j];
            four[i][j]=temp[i][j]*2;
            printf("%3i ", four[i][j]);
        }
        printf("\n");
    }
}

