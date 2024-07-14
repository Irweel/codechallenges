#include <stdio.h>

int main(){
    int n;

    printf("Ingrese numero para factorizar: \n");
    scanf("%d", &n);

    int factorial(int n){
        if (n==0)                     //Condicion del caso Base
            return 1;                 //Instruccion del caso Base
        else                          //Condicion del caso General
            return n*factorial(n-1);  //Instruccion del caso General
    }

    printf("%d \n", factorial(n));

}
