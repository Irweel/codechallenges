// Cree dos vectores paralelos de 30 elementos cada uno. Uno debe con-
// tener vocales y el otro números del -10 al 10. Ambos generados al azar.
// Hallar el mínimo y máximo en el vector de números, pero mostrando
// además las vocales correspondiente al vector paralelo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main(){

    int i, j, r;
    float v[n];
    float max=100;
    float min=-100;
    char c[n], m, x;
    char k[5]={'a', 'e', 'i', 'o', 'u'};

    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%21-10;
        v[i]=r;
        printf("%2.f, ", v[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){
        r=rand()%5;
        c[i]=k[r];
        printf("%c, ", c[i]);
    }

    for(i=0; i<n; i++){
        if(v[i]<max){
            max=v[i];
            m=c[i];
        }
        if(v[i]>min){
            min=v[i];
            x=c[i];
        }
    }

    printf("\n");
    printf("Max: %2.f, %c, Min: %2.f, %c", min, m, max, x);
    printf("\n");

}
