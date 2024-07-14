// 21. Ingrese una matriz de 5 X 5 de números aleatorios del 0 al 9. Use
// un menú de opciones para: A – sumar; B – restar; C – Multiplicar
// y D – Dividir, un escalar ingresado por el usuario. Con X – Salir.
// En el caso de la suma, el escalar debe sumarse con cada elemento de
// la matriz. Es decir que el resultado será una matriz de 5x5 con cada
// elemento sumado con el escalar. En caso análogo pero con la resta.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5
#define m 5

void generar(int x[][m]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            x[i][j]=rand()%10;
            printf("%3i", x[i][j]);
        }
        printf("\n");
    }
}

void sumar(int x[][m]){
    int i, j, k;
    int temp[n][m];
    printf("Ingrese un escalar para operar: ");
    scanf("%d", &k);
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            temp[i][j]=x[i][j]+k;
            printf("%3i", temp[i][j]);
        }
        printf("\n");
    }
}
void restar(int x[][m]){
    int i, j, k;
    int temp[n][m];
    printf("Ingrese un escalar para operar: ");
    scanf("%d", &k);
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            temp[i][j]=x[i][j]-k;
            printf("%3i", temp[i][j]);
        }
        printf("\n");
    }
}

void multiplicar(int x[][m]){
    int i, j, k;
    int temp[n][m];
    printf("Ingrese un escalar para operar: ");
    scanf("%d", &k);
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            temp[i][j]=x[i][j]*k;
            printf("%3i", temp[i][j]);
        }
        printf("\n");
    }
}

void dividir(int x[][m]){
    int i, j, k;
    float temp[n][m];
    printf("Ingrese un escalar para operar: ");
    scanf("%d", &k);
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            temp[i][j]= (float)x[i][j]/k;
            printf("%.2f ", temp[i][j]);
        }
        printf("\n");
    }
}

void menu(int x[][m]){
    char t;
    while(1){
        printf("\n");
        printf("Lista de opciones:\n");
        printf("A. Sumar\n");
        printf("B. Restar\n");
        printf("C. Dividir\n");
        printf("D. Multiplicar\n");
        printf("X. Salir\n");
        printf("\n");
        printf("Su eleccion\n");
        scanf("%c", &t);
        switch(t){
            case 'a':
                sumar(x);
                break;
            case 'b':
                restar(x);
                break;
            case 'c':
                dividir(x);
                break;
            case 'd':
                multiplicar(x);
                break;
            case 'x':
                printf("Adios!\n");
                return;
            default:
                printf("NOT A VALID CHOICE!\n");
                break;
        }
    }
}


int main(){
    int matrix[n][m];
    srand(time(NULL));
    generar(matrix);
    menu(matrix);
    return 0;
}
