#include <stdio.h>

int main(){

    int a, n;

    printf("Ingrese numero a mayor que 0: \n");
    scanf("%d", &a);
    printf("Ingrese numero b mayor que 0: \n");
    scanf("%d", &n);

    int mcd(int a, int n){
        if (a==n){                    // Condicion caso base  (si n=0 => a^n=1)
            return n;                 // Instruccion caso base
        }
        else if (a>n){
           return mcd(a-n, n);   //Instruccion caso general
        }
        else {
           return mcd(a, n-a);   //Instruccion caso general
        }
    }

    printf("%d \n", mcd(a, n));

}
