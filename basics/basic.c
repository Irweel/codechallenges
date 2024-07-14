#include <stdio.h>

int main(){
    int n;
    printf("Ingrese salario \n");
    scanf("%d", &n);
    int descuento(int n){
        return n + (n * 0.25);
    }
    printf("Su salario nuevo sera %d  \n", descuento(n));
}
