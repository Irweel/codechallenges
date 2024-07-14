// Ejemplo 3: implementar un programa que lea los dos catetos de un triángulo
// rectángulo para hallar su perímetro, usar las funciones «cuadrado»,
// «suma» e «hipotenusa».
// Sabemos que el perímetro de un triángulo es la suma de sus lados.


#include <stdio.h>
#include <math.h>
// Se debe incluir libreria math.h para usar raiz cuadrada sqrt.
// compilacion en gcc de math.h requiere -lm al final -l de linker y -m de library name.

float cuadrado(float x){
    return(x*x);
}

float hipotenusa(float x, float y){
    float z;
    z=sqrt(cuadrado(x)+cuadrado(y));
    return(z);
}

float suma(float x, float y, float z){
    return(x+y+z);
}

int main(){
    float a, b, perim;
    printf("Ingrese valores para los catetos:");
    scanf("%f %f", &a, &b);
    perim=suma(hipotenusa(a,b),a,b);
    printf("\nEl perimetro del triagulo es %0.2f", perim);
    printf("\n");
    return 0;
}
