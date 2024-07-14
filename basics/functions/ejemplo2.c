// Ejemplo 2: implementar un programa que lea un número entero y calcule
// su factorial y su cuadrado.
//

#include <stdio.h>


int factorial(int x){
    if(x==0)
        return 1;
    else
        return x*factorial(x-1);

    // Sin Recursion:
    // int i; int aux=1;
    // for(i=2; i<=x; i++){
    //    aux = aux * i;
    // return(aux);
    // }
}

int cuadrado(int x){
    return x*x;
}



int main(){
    int a;
    printf("Ingrese un numero: \n");
    scanf("%d", &a);
    printf("Factorial: %d, Cuadrado: %d\n", factorial(a), cuadrado(a));
    return 0;
}

