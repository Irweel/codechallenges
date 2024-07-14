// 7. Ingrese un vector con 20 números enteros al azar del 1 al 10. Halle el
// promedio. Cantidad de pares y cantidad de impares.
//

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
int promedio(int v[]){
    int i, sum=0;
    for(i=0; i<n; i++){
        sum=sum+v[i];
    }
    return(sum/n);
}
int par(int v[]){
    int i, sum=0;
    for(i=0; i<n; i++){
        if(v[i]%2==0)
            sum++;
    }
    return(sum);
}
int impar(int v[]){
    int i, sum=0;
    for(i=0; i<n; i++){
        if(v[i]%2!=0)
            sum++;
    }
    return(sum);
}

int main(){
    int v[n];
    srand(time(NULL));
    generar(v);
    printf("El promedio es de %d\n", promedio(v));
    printf("Pares:%d. Impares: %d\n", par(v), impar(v));
}
