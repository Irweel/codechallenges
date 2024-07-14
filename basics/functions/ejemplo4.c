// Ejemplo 4: implementar un programa que muestre si la resta de dos números
// devuelve un número negativo, positivo o nulo usando una función cuyo
// retorno sea un carácter (“-”,”+”,”N”), respectivamente
//

#include <stdio.h>

int resta(int x, int y){
    int res;
    res=x-y;
    if(res>0)
        return('+');
    else
        if(res==0)
            return('N');
        else
            return('-');
}

int main(){
    int a, b;
    printf("Ingrese 2 numeros:");
    scanf("%d %d", &a, &b);
    printf("La diferencia entre %i, y %i es %c.\n", a, b, resta(a,b));
}
