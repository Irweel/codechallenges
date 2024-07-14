// 2. Realice un menú que tenga las siguientes opciones: 1-Área 2-Perí-
// metro 3-Hipotenusa 4-Salir. Ingresando los dos catetos a y b de un
// triángulo rectángulo. Incluir la librería math.h.


#include <stdio.h>
#include <math.h>

float area(float a, float b){
    float z;
    z=a*b;
    return(z/2);
}

float hipotenusa(float a, float b){
    float z;
    z=a*a+b*b;
    return(sqrt(z));
}
float perimetro(float a, float b){
    float n;
    n=a+b;
    return(n+hipotenusa(a,b));
}

void menu(){
    float a, b, c;
    int x;
    while(1){
        printf("Programa de calculo triangulos rectangulos\n");
        printf("Opciones:\n");
        printf("1. Area\n");
        printf("2. Perimetro\n");
        printf("3. Hipotenusa\n");
        printf("4. Salir\n");
        printf("Ingrese los valores e A y B:");
        scanf("%f %f", &a, &b);
        printf("Ingrese una opcion:");
        scanf("%d", &x);
        getchar();
        switch(x){
            case 1:
                printf("\nArea: %0.4f\n", area(a,b));
                printf("\n");
                break;
            case 2:
                printf("\nPerimetro: %0.4f\n", perimetro(a,b));
                printf("\n");
                break;
            case 3:
                printf("\nHipotenusa: %0.4f\n", hipotenusa(a,b));
                printf("\n");
                break;
            case 4:
                printf("Adios!\n");
                printf("\n");
                return;
            default:
                printf("\nNo es una opcion valida\n");
                printf("\n");
                break;
         }
    }
}

int main(){
    menu();
    return 0;
}
