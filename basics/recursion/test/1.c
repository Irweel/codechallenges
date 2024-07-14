// 23. Realice un algoritmo usando recursividad para el producto a x b.
// Una ayuda usar → producto(a,b-1). Los números a y b ingresados por
// el usuario deben ser naturales
//

#include <stdio.h>

int producto(int x, int y){
    int z;
    if(y==0)
        return (0);
    else if(y==1)
        return x;
    else
        z = x + producto(x, y-1);
        return z;

}


int main(){
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    printf("El resutaldo de %d x %d es %d.\n", a, b, producto(a,b));
    return 0;
}
