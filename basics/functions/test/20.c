// 20. Ingrese 3 matrices (m1, m2 y m3) de 4 X 4 con números al azar (del
// 0 al 9), halle la suma de m1+m2, m2+m3 o m1+m3 y muestre cada
// resultado. Use el menú de opciones.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 4


void generar(int x[][m], int y[][m], int z[][m]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            x[i][j]=rand()%10;
            printf("%3i", x[i][j]);
        }
        printf("      ");
        for(j=0; j<m; j++){
            y[i][j]=rand()%10;
            printf("%3i", y[i][j]);
        }
        printf("      ");
        for(j=0; j<m; j++){
            z[i][j]=rand()%10;
            printf("%3i", z[i][j]);
        }
        printf("\n");
    }
}

void sumar(int x[][m], int y[][m]){
    int i, j, temp[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            temp[i][j]=x[i][j]+y[i][j];
            printf("%3i", temp[i][j]);
        }
        printf("\n");
    }
}

void menu(int x[][m], int y[][m], int z[][m]){
    int t;
    while(1){
        printf("\n");
        printf("------OPCIONES-------\n");
        printf("1. m1+m2\n");
        printf("2. m2+m3\n");
        printf("3. m1+m3\n");
        printf("4. Salir\n");
        printf("\n");
        printf("Que opcion?:");
        scanf("%d", &t);
        switch(t){
            case 1:
                sumar(x,y);
                break;
            case 2:
                sumar(y,z);
                break;
            case 3:
                sumar(x,z);
                break;
            case 4:
                return;
            default:
                printf("No es una opcion valida.\n");
                break;
        }
    }
}

int main(){
    int a1[n][m], a2[n][m], a3[n][m];
    srand(time(NULL));
    generar(a1, a2, a3);
    menu(a1,a2, a3);
    return 0;
}
