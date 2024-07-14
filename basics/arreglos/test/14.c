// Escriba un programa que genere un vector de 10 números al azar (del 1
// al 9) y permita ingresar por teclado un escalar para efectuar el produc-
// to con el vector. El vector resultante deberá ser uno nuevo y mostrarlo.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 10

int main(){
    int i, v[n], r, k;

    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%10;
        v[i]=r;
        printf("%d, ", v[i]);
    }
    printf("\n");
    printf("Escriba un escalar para efectuar un producto:\n");
    scanf("%d", &k);

    for(i=0; i<n; i++){
        v[i]=v[i]*k;
        printf("%d, ", v[i]);
    }

    printf("\n");
}
