//10. Ingrese un vector «v» con 20 números enteros al azar del 1 al 10. Y
// usando dos vectores «vi» y «vp» de 20 elementos, llene al primero con
// los números impares de «v», y al otro «vp» los pares (sin respetar la
// posición original, es decir que posiblemente quede «basura» en los
// elementos finales de cada vector).
// Muestre los tres vectores (sin la basura).
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

void generar(int v[]){
    int i;
    for(i=0; i<n; i++){
        v[i]=rand()%10+1;
        printf("%3i", v[i]);
    }
    printf("\n");
}

void llenar(int v[], int v1[], int v2[]){
    int i, j;
    for(i=0; i<n; i++){
        if(v[i]%2==0){
            v1[i]=v[i];
            printf("%3i", v1[i]);
        }
    }
    printf("\n");
    for(i=0; i<n; i++){
            if(v[i]%2!=0){
                v2[i]=v[i];
                printf("%3i", v2[i]);
        }
    }
    printf("\n");
}

int main(){
    int v[n], v1[n], v2[n];
    srand(time(NULL));
    generar(v);
    llenar(v, v1,v2);
    return 0;
}
