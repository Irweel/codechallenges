#include <stdio.h>

int suma(int x, int y){
    int z;
    z=x+y;
    return(z);
    // con variable local
}
int producto(int x, int y){
    return(x * y);
    // sin variables locales
}

int main(){
    int a, b, sum, p;
    // variables globales
    printf("\n Ingrese los dos numeros: ");
    scanf("%d %d", &a, &b);
    sum=suma(a, b);
    p=producto(a, b);
    printf("\nLa suma es %d y el producto es %d \n", sum, p);
    return 0;

}
