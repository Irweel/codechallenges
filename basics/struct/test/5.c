// Ídem al anterior, solo que los datos deben ingresarse al azar usando
// el mismo rango x ϵ [-10, 10] y un dígito decimal del 0 al 9.
// Ordenarlos de modo descendente por X y mostrar los datos.

// Cree una estructura que almacene x y f(x).
// La función es la siguiente: f(x) = cos(x)2-3x.
// Con x ϵ [-10, 10] con pasos de 0.5 automáticamente. Muestre los datos.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define n 40

struct data{
    double x;
    double fx;
};

void generar(double s[]){
    int i, r, decimal;
    for(i=0; i<n; i++){
       decimal=rand()%10;
       r=rand()%21;
       s[i]=(float)(r-10.00)+decimal/10.00;
    }
}
void ordenar(double s[]){
    int i, j, aux;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(s[i]<s[j]){
               aux=s[i];
               s[i]=s[j];
               s[j]=aux;
            }
        }
    }
}

int main(){
    double step[n];
    srand(time(NULL));
    generar(step);
    ordenar(step);
    struct data function[n];
    int i;
    for(i=0; i<n; i++){
        function[i].x = step[i];
        function[i].fx = pow(cos(function[i].x),2) - 3 * function[i].x;

    }
    printf("x           f(x)=cos(x)^2 -3x.\n");
    for(i=0; i<n; i++){
        printf("%0.2f           %0.2f.\n", function[i].x, function[i].fx);

    }


    return 0;
}
