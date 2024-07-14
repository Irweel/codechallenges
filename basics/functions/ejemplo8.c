// Ejemplo 8: crear y mostrar una matriz de N X M con las vocales aleatoriamente.
// Luego el usuario debe ingresar una vocal para hallar la cantidad
// dentro de la matriz. Usar funciones y procedimientos.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 3
#define m 4

char v[]={'a','e','i','o','u'};

void generar(char mx[n][m]){
    int i, j, r;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            r=rand()%5;
            mx[i][j]=v[r];
        }
    }
}

void mostrar(char mx[n][m]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%c", mx[i][j]);
        }
        printf("\n");
    }

}

int calcular(char ma[n][m],char c){
    int suma=0, i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(c==ma[i][j])
                suma++;
        }
    }
    return(suma);
}


int main(){
    char matrix[n][m], c;
    srand(time(NULL));
    generar(matrix);
    mostrar(matrix);
    printf("\nIngrese el caracter que quiere calcular su cantidad:");
    scanf("%c", &c);
    printf("Cantidad de %c:%d\n", c, calcular(matrix,c));
    return 0;
}
