// Ejemplo 11: la sumatoria de un número. Por ejemplo de 5 es 5 + 4 + 3 + 2 + 1 = 15

#include <stdio.h>

int sumatoria(int x){
    int r=0;
    if(x==0)
        return(0);
    else if(x==1)
        return(1);
    else
        r = x + sumatoria(x-1);
        return(r);
}



int main(){
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La sumatoria de %d es %d.\n", n, sumatoria(n));
    return 0;
}
