// 3. Realice un programa que ingrese a un vector de 20 posiciones,
// números al azar del 1 al 10, muestre dichos números, halle la cantidad
// de números mayores a 5 y halle la cantidad de números menores o
// iguales que 5. Mostrar ambos resultados.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

int i;

int generar(int lista[]){
    for(i=0; i<n; i++){
        lista[i]=rand()%10+1;
    }
}
int mostrar(int lista[]){
    for(i=0; i<n; i++){
        printf("%3i", lista[i]);
    }
}
int hallarMayores(int lista[]){
    int temp=0;
    int j;
    for(i=0; i<n; i++){
        if(lista[i]>5)
            temp++;
    }
    printf("\n");
    printf("Hay %d elementos mayores a 5.\n", temp);
}
int hallarMenores(int lista[]){
    int temp=0;
    int j;
    for(i=0; i<n; i++){
        if(lista[i]<=5)
            temp++;
    }
    printf("\n");
    printf("Hay %d elementos menores a 5.\n", temp);
}

int main(){
    int lista[n];
    generar(lista);
    mostrar(lista);
    hallarMayores(lista);
    hallarMenores(lista);
}
