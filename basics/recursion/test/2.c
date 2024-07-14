// 24. Realice un algoritmo con recursividad para la potencia a^b. Los números
// a y b ingresados por el usuario deben ser naturales.

#include <stdio.h>

int potencia(int a, int b){
    int c;
    if(b==0){
        return 1;
    }
    else if(b==1){
        return a;
    }
    else{
        c = a * potencia(a, b-1);
        return c;
    }
}


int main(){
    int a, b;
    printf("Ingrese dos numeros naturales para realizar la potencia: ");
    scanf("%d %d", &a, &b);
    printf("El resultado de %d^%d es %d.\n", a, b, potencia(a, b));
    return 0;
}
