// Escriba un programa que genere 2 vectores con 20 enteros al azar
// cada uno (del 1 al 10) y cree un tercer vector de 40 elementos que sea
// el resultado de intercalar los dos vectores anteriores (subíndice por
// subíndice). Mostrar todos los vectores.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20
#define m 40

int main(){
    int i, r;
    int k=0;
    int x[n], y[n], z[m];
    srand(time(NULL));

    printf("Vector A:\n");
    for(i=0; i<n; i++){
        r=rand()%10+1;
        x[i]=r;
        printf("%d, ", x[i]);
    }
    printf("\n");

    printf("Vector B:\n");
    for(i=0; i<n; i++){
        r=rand()%10+1;
        y[i]=r;
        printf("%d, ", y[i]);
    }
    printf("\n");

    printf("Vector C:\n");
    for(i=0; i<m; i++){
        z[k]=x[i];
        z[k+1]=y[i];
        k=k+2;
        printf("%d, ", z[i]);
    }
    printf("\n");
}
