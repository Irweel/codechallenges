// 8. Ingrese números al azar (del 1 al 9) a dos vectores de nombre v1 y v2.
// Muéstrelos y luego halle y muestre la cantidad de números pares que
// se encuentran en cada vector.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 7

void generar(int x[]){
    int i;
    for(i=0; i<n; i++){
        x[i]=rand()%9+1;
        printf("%d ", x[i]);
    }
    printf("\n");
}
int can(int x[]){
    int i, sum=0;
    for(i=0; i<n; i++){
        if(x[i]%2==0)
            sum++;
    }
    return(sum);
}


int main(){
    int v1[n], v2[n];
    srand(time(NULL));
    generar(v1);
    generar(v2);
    printf("La cantida de pares de cada vector es de %d, %d en v1 y %d en v2.\n",
    can(v1)+can(v2), can(v1), can(v2));
}
