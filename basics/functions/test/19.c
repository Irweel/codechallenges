// 19. Cree un programa con un menú de opciones para 1 - Mostrar la matriz;
// 2- Mostrar la matriz traspuesta; 3-Mostrar el inverso de la matriz
// (0 por 1 y viceversa); 4-Generar una nueva matriz y 5-Salir. La matriz
// de 5 X 5 debe contener números binarios generados aleatoriamente.
// En un principio, ésta debe contener ceros.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5
#define m 5

void generar(int x[][m]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            x[i][j]=rand()%2;
        }
    }
}
void mostrar(int x[][m]){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%3i", x[i][j]);
        }
        printf("\n");
    }
}

void transpuesta(int x[][m]){
    int i, j, trans[m][n];
    for(j=0; j<m; j++){
        for(i=0; i<n; i++){
            trans[j][i]=x[i][j];
            printf("%3i", trans[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}

void inversa(int x[][m]){
    int i, j, inver[m][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(x[i][j]==0){
                inver[i][j]=1;
            }
            else
                inver[i][j]=0;
            printf("%3i", inver[i][j]);
        }
        printf("\n");
    }

}

void menu(int matrix[][m]){
    int t;
    while(1){
        printf("Calculadora de Matrices\n");
        printf("1. Mostrar matriz\n");
        printf("2. Mostrar Transpuesta\n");
        printf("3. Mostrar el inverso de la matriz\n");
        printf("4. Generar una nueva matriz\n");
        printf("5. Salir\n");
        printf("\n");
        printf("Su opcion:");
        scanf("%d", &t);
        switch(t){
            case 1:
                mostrar(matrix);
                break;
            case 2:
                transpuesta(matrix);
                break;
            case 3:
                inversa(matrix);
                break;
            case 4:
                generar(matrix);
                mostrar(matrix);
                break;
            case 5:
                printf("Ta luego.\n");
                return;
            default:
                printf("Not a valid choice mi amigo\n");
                printf("\n");
                break;
        }
    }
}

int main(){
    int matrix[n][m]={0};
    srand(time(NULL));
    menu(matrix);
    return 0;
}
