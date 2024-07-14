// Escriba un programa que genere un vector de 30 enteros al azar (del
// -10 al 10). Calcule e imprima su mínimo y máximo.
//
// PERO!! Utilizando el metodo burbuja de ordenamiento.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main(){
    int i, j;
    float v[n], aux, r, max, min;

    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%21-10;
        v[i]=r;
        printf("%2.f, ", v[i]);
    }

    printf("\n");

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    min=v[0];
    max=v[29];

    printf("min: %2.f, max:  %2.f", min, max);
    printf("\n");
}
