// 13. Ingrese tres vectores v1, v2 y v3 con 30 números al azar del 1 al 10. En
// otro vector p debe tener el promedio (de cada posición de los tres vec-
// tores), es decir que finalmente nos quedará un vector de 30 elementos
// reales. Mostrar el vector p y su valor máximo.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

void generar(int v[]){
    int i;
    for(i=0; i<n; i++){
        v[i]=rand()%10+1;
        printf("%d ", v[i]);
    }
    printf("\n");
}

void promedio(int x[], int y[], int z[], int p[]){
    int i;
    int temp[i];
    for(i=0; i<n; i++){
        temp[i]=x[i]+y[i]+z[i];
        p[i]=temp[i]/3;
        printf("%d ", p[i]);
    }
    printf("\n");
}

int maximo(int p[]){
    int i;
    int max=0;
    for(i=0; i<n; i++){
        if(p[i]>max){
            max=p[i];
        }
    }
    return max;
    printf("\n");
}

int main(){
    int v1[n], v2[n], v3[n], p[n];
    srand(time(NULL));
    generar(v1);
    generar(v2);
    generar(v3);
    promedio(v1, v2, v3, p);
    printf("Maximo: %d \n", maximo(p));
    return 0;
}
