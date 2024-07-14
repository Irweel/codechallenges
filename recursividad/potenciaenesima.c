#include <stdio.h>

int main(){

    int a, n;

    printf("Ingrese numero de base: \n");
    scanf("%d", &a);
    printf("Ingrese numero de exponente: \n");
    scanf("%d", &n);

    int potencia(int a, int n){
        if (n==0){                    // Condicion caso base  (si n=0 => a^n=1)
            return 1;                 // Instruccion caso base
        }
        else {
           return a * potencia(a, n-1);   //Instruccion caso general
        }
    }

    printf("%d \n", potencia(a, n));

}

