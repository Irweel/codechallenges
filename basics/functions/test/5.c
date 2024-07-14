// 5. Ingrese un vector con 20 números enteros al azar del 1 al 10. Muestre
// la cantidad de números impares. Calcule la cantidad de números 1 y 3.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define n 20

int i;

void generar(int v[]){
    for(i=0; i<n; i++){
        v[i]=rand()%10+1;
        printf("%d ", v[i]);
    }
    printf("\n");
}
int mostrarImp(int v[]){
    int sum=0;
    for(i=0; i<n; i++){
        if(v[i]%2!=0)
            sum++;
    }
    printf("\n");
    return sum;
}

int calcularNum(int v[]){
    int sum=0;
    for(i=0; i<n; i++){
        if(v[i]==1|| v[i]==3)
            sum++;
    }
    printf("\n");
    return sum;
}

int main(){
    int v[n];
    srand(time(NULL));
    generar(v);
    printf("Cantidad de numeros impares: %d\n", mostrarImp(v));
    printf("Cantidad de numeros 1 y 3: %d\n", calcularNum(v));
    return 0;
}
