#include <stdio.h>

int main(){

    int n;

    printf("Ingrese numero Entero: \n");
    scanf("%d", &n);

// Si n<=1 entonces el valor es n.
// Si n>0, entonces es el valor de la suma de los 2 terminos anteriores,
// f(n-1)+f(n-2)
// f(0)=0
// f(1)=1

    int fibo(int n){
        if (n==0)
            return 0;
        else if (n==1){                    // Condicion caso base  (si n=0 => a^n=1)
            return 1;                      // Instruccion caso base
        }
        else {
           return fibo(n-1)+fibo(n-2);    // Recursividad multiple
        }
    }

    printf("%d \n", fibo(n));

}

