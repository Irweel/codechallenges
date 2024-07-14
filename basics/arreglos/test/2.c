// Escriba un programa que genere un vector de 20 enteros al azar,
// lo muestre y calcule e imprima su promedio. Los números deben
// oscilar entre el 5 y el 10.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

int main() {
    int i, r, pro;
    int v[n];
    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%6+5;
        v[i]=r;
        pro=pro+v[i];
    }
    for(i=0; i<n; i++){
        printf(" %d ", v[i]);
    }
    printf("\n Promedio total de todos los vectores: %d ", pro/n );
    printf("\n ");
}
