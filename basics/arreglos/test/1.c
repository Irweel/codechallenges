// Escriba un programa que genere un vector de 100 números enteros
// al azar y lo muestre. Calcule e imprima su suma. Los números deben
// oscilar entre el 0 y el 9.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 100


int main() {
    int v[n]={0};
    int i, r;
    int sum=0;
    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%9+1;
        v[i]=r;
        sum=v[i]+sum;
    }
    printf("Vectores:");
    for(i=0; i<n; i++){
        printf(" %d, ", v[i]);
    }
    printf("Suma total de todos los vectores: %d \n", sum);
    printf("\n");

}
