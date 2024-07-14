// Escriba un programa que genere un vector de 20 números decima-
// les al azar y lo muestre. Además, debe calcular e imprimir su pro-
// medio (solo los números que se ubican en subíndices impares). Los
// números deben oscilar entre el -5.0 y el 5.0
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

int main(){
    int i;
    int j=0;
    float v[n];
    srand(time(NULL));
    float r, sum;

    for(i=0; i<n; i++){
        r=rand()%11-5;
        v[i]=r;
        if(i%2!=0){
            sum=sum+v[i];
        }
        printf("%f, ", v[i]);
    }
    printf("\n");
    printf(" Promedio de indice inpar %f, ", sum/10);
    printf("\n");
}
