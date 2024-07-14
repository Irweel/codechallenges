// Ejemplo 6: implementar un programa que muestre un cartel según si la res-
// ta de dos números devuelve un número negativo, positivo o nulo usando un
// procedimiento.

#include <stdio.h>

void resta(int x, int y){
    int res;
    res=x-y;
    if(res==0)
        printf("\nEl resultado es nulo");
    else
    if(res>0)
        printf("\nEl resultado es positivo");
    else
        printf("\nEl resultado es negativo");
}
int main(){
    int a,b;
    printf("\nIngrese los dos números: ");
    scanf("%d %d", &a, &b);
    resta(a,b);
    printf("\n");
    return 0;
}
