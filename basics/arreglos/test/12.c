// Escriba un programa que genere un vector de 30 enteros al azar (del
// -10 al 10). Calcule e imprima su mínimo y máximo.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main (){
    int i, j;
    float v[n], r;
    float max=100;
    float min=-100;
    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%21-10;
        v[i]=r;
        printf("%.2f, ", v[i]);
    }
    for(i=0; i<n; i++){
        if(min<v[i]){
            min=v[i];
        }
        if(max>v[i]){
            max=v[i];
        }
    }

    printf("\n");
    printf("maximo : %.2f, minimo: %.2f ", min, max);
    // no se por que, pero estan al revez xd

    printf("\n");
}
