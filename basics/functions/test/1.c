// 1. Escriba un programa que solicite el ingreso del grado de un ángulo
// y con un menú por pantalla que permita optar por hallar el A - seno,
// B - coseno y C - tangente de dicho ángulo. Recuerde que con D sale y
// que antes de resolver trigonométricamente debe hacer el pasaje de
// grados a radianes. Incluir la librería math.h.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159265


float pasaje(float x){
    float rad;
    return x*pi/180;
}
float seno(float x){
    float a;
    // a=sin(pasaje(x));
    return sin(pasaje(x));
}
float coseno(float x){
    float a;
    // a=cos(pasaje(x));
    return cos(pasaje(x));
}
float tangente(float x){
    float a;
    pasaje(x);
    // a=tan(pasaje(x));
    return tan(pasaje(a));
}

void menu(){
    float gr;
    char option;
    while(1){
        printf("Bienvenido al programa um dois tres, tris dois um\n");
        printf("A) para calcular seno\n");
        printf("B) para calcular coseno\n");
        printf("C) para calcular tangente\n");
        printf("D) Salir\n");
        printf("Ingrese primero el numero de grados:");
        scanf("%f", &gr);
        printf("Ingrese la opcion: ");
        scanf(" %c", &option);
        switch(option){
            case 'a':
                printf("Resultado:%.4f\n", seno(gr));
                break;
            case 'b':
                printf("Resultado:%.4f\n", coseno(gr));
                break;
            case 'c':
                printf("Resultado:%.4f\n", tangente(gr));
                break;
            case 'd':
                printf("Adios\n");
                return;
            default:
                printf("No es una opcion valida\n");
        }
    }
}

int main(){
    menu();
    return 0;
}
