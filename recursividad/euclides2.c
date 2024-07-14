#include <stdio.h>

int main(){

    int a, b;

    printf("Ingrese numero a mayor que 0: \n");
    scanf("%d", &a);
    printf("Ingrese numero b mayor que 0: \n");
    scanf("%d", &b);

    int mcd(int a, int b){
        if (a%b==0){                    // Condicion caso base  (si n=0 => a^n=1)
            return b;                 // Instruccion caso base
        }
        else {
           return mcd(b, a%b);   //Instruccion caso general
        }
    }

    printf("%d \n", mcd(a, b));

}
