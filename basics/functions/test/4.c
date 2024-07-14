// 4. Ingrese un vector de números binarios (0 y 1) y cree otro vector invirtiendo
// los números del primer vector. Mostrar ambos vectores.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define n 5

int i;
int generar(bool v[]){
    for(i=0; i<n; i++){
        v[i]=rand()%2;
        printf("%d ", v[i]);
    }
    printf("\n");
}

int evil(bool v[], bool b[]){
    for(i=0; i<n; i++){
        if(v[i]==1)
            b[i]=0;
        else
            b[i]=1;
        printf("%d ", b[i]);
    }
    printf("\n");
}

int main(){
    bool v[n], b[n];
    srand(time(NULL));
    generar(v);
    evil(v,b);
}
