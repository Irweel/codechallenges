// 9. Ingrese un vector con 20 números enteros al azar del 1 al 10. Cambie
// los números pares por 0. Cambie los impares por 1. Muestre el vector
// resultante. Muestre la cantidad de impares y pares.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

void generar(int v[]){
    for(int i=0; i<n; i++){
        v[i]=rand()%10+1;
        printf("%d ", v[i]);
    }
    printf("\n");
}
void binarizar(int v[]){
    int sum=0;
    for(int i=0; i<n; i++){
        if(v[i]%2==0){
            v[i]=0;
            sum++;
        }
        else
            v[i]=1;
        printf("%d ", v[i]);
    }
    printf("\n");
    printf("Cantidad de pares: %d, Impares; %d", sum, n-sum);
    printf("\n");
}

int main(){
    int v[n];
    srand(time(NULL));
    generar(v);
    binarizar(v);
    return 0;
}
