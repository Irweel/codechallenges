// 12. Ingrese dos vectores con 20 números al azar del 0 al 10 («va» y «vb»).
// Cree otro vector «vc» que tenga en cada posición la letra «A» o «B» según
// el mayor de ambos (pero si son iguales se coloca el “=”) y mostrar
// el vector «vc». Muestre la cantidad de «A» y de «B». Por ejemplo:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

void generar(int v[n]){
    int i;
    for(i=0; i<n; i++){
        v[i]=rand()%11;
        printf("%d ", v[i]);
    }
    printf("\n");
}
void vector(int a[], int b[], char c[]){
    int i;
    for(i=0; i<n; i++){
        if(a[i]==b[i]){
            c[i]='=';
        }
        else if(a[i]>b[i]){
            c[i]='A';
        }
        else{
            c[i]='B';
        }
        printf("%c ", c[i]);
    }
    printf("\n");
}


int main(){
    int va[n], vb[n];
    char vc[n];
    srand(time(NULL));
    generar(va);
    generar(vb);
    vector(va, vb, vc);
    return 0;
}
