// Escriba un programa que genere 2 vectores con 20 enteros al azar
// cada uno (del 1 al 9) y cree un tercer vector que guarde las suma de
// ambos (subíndice por subíndice)
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

int main(){
    int i, r;
    int x[n], y[n], z[n];
    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%9+1;
        x[i]=r;
    }
    for(i=0; i<n; i++){
        r=rand()%9+1;
        y[i]=r;
    }
    for(i=0; i<n; i++){
        z[i]=x[i]+y[i];
    }
    printf("A:  B:  TOTAL: \n");
    for(i=0; i<n; i++){
        printf("%d +  %d = %d .\n", x[i], y[i], z[i]);
    }


}
