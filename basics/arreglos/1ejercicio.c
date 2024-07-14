#include<stdio.h>
#define N 10

// cómo agregar 10 números enteros por teclado a un arreglo de
// nombre «arreglo»

int main (){
    int i;
    int arreglo[N];
    for (i=0; i<N; i++){
        printf("\n Escribe el numero %i:", i);
        scanf("%d", &arreglo[i]);
    }
    printf("Los numeros ingresados son: ");

    for (i=0; i<N; i++){
        printf("%i, ", arreglo[i]);
    }

    printf("\n  ");
}
