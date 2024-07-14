// Ejemplo 12: el siguiente es un algoritmo de ejemplo para ingresar un regis-
// tro de un empleado: (n.º de legajo, edad, sueldo y categoría), y luego mues-
// tra por pantalla el registro en una línea.
//

#include <stdio.h>

#define n 3

int main(){
    struct miestructura{
        int legajo, edad;
        double sueldo;
        char categoria;
    };
    struct miestructura empleado[n];
    int i;
    for(i=0; i<n; i++){
        printf("Ingrese numero de legajo: ");
        scanf("%d", &empleado[i].legajo);
        printf("Ingrese edad: ");
        scanf("%d", &empleado[i].edad);
        printf("Ingrese numero de sueldo: ");
        scanf("%lf", &empleado[i].sueldo);
        while(getchar()!='\n');
        printf("Ingrese categoria: ");
        scanf("%c", &empleado[i].categoria);
    }
    printf("\nDatos de los empleados:\n");
    for(i=0; i<n; i++){
    printf("Legajo %d, la edad %d, categoria %c, sueldo %0.2f\n", empleado[i].legajo,
            empleado[i].edad, empleado[i].categoria, empleado[i].sueldo);
    }
    return 0;
}
