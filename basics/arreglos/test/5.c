// Escriba un programa que genere un vector de 30 números al azar
// (del 1 al 10), lo muestre y cuente la cantidad de números pares e im-
// pares. Mostrar los resultados.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main(){
    int v[n];
    int i, r, par, imp;
    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%11+1;
        v[i]=r;
        if(v[i]%2==0){
           par++;
        }
        else{
           imp++;
        }
    }
    for(i=0; i<n; i++){
        printf("%d, ", v[i]);
    }
    printf("\n ");
    printf("Cantidad numeros pares: %d \n", par);
    printf("Cantidad numeros imp: %d \n", imp);

}
