// 11. Ingrese dos vectores de 20 números enteros al azar del 1 al 10. Sume
// cada elemento de ambos vectores para agregarlo en otro nuevo vector.
// Halle de ambos vectores el promedio en cada posición y agregue
// el resultado en otro nuevo vector. Finalmente, muestre los cuatro
// vectores resultantes.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

void generar(int v[]){
    int i;
    for(i=0; i<n; i++){
        v[i]=rand()%10+1;
        printf("%d ", v[i]);
    }
    printf("\n");
}
void sumar(int x[], int y[], int z[]){
    int i;
    for(i=0; i<n; i++){
        z[i]=x[i]+y[i];
        printf("%d ", z[i]);
    }
    printf("\n");
}

void promedio(int q[], int w[], int e[], int r[]){
    int i;
    int temp[n];
    for(i=0; i<n; i++){
        temp[i]=q[i]+w[i]+e[i];
        r[i]=temp[i]/3;
        printf("%d ", r[i]);
    }
    printf("\n");
}

int main(){
    int v1[n], v2[n], v3[n], v4[n];
    srand(time(NULL));
    generar(v1);
    generar(v2);
    sumar(v1,v2,v3);
    promedio(v1,v2,v3,v4);
    return 0;
}
