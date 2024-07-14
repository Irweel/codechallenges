// Ejemplo 10: factorial de un número.
//

#include <stdio.h>

int factorial(int n){
    int x;
    if (n==0)
        return(1);
    else
       x= n * factorial(n-1);
       return x;
}

int main(){
    int n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    printf("Resultado: %d.\n", factorial(n));
    return 0;
}
