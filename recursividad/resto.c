#include <stdio.h>

int main(){

    int a, n;

    printf("Ingrese numero de base: \n");
    scanf("%d", &a);
    printf("Ingrese divisor: \n");
    scanf("%d", &n);

    int resto(int a, int n){
        if (a<n){                    // Condicion caso base  (si n=0 => a^n=1)
            return a;                 // Instruccion caso base
        }
        else {
           return resto(a-n, n);   //Instruccion caso general
        }
    }

    printf("%d \n", resto(a, n));

}


