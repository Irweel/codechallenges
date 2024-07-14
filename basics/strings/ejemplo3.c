// Ejemplo 16: se ingresa una palabra y se muestra su longitud

#include <stdio.h>
#include <string.h>
// Libreria string  -> NUEVA

#define n 30

int main(){
    char cadena[n];
    printf("Ingrese una frase:\n");
    fgets(cadena, sizeof(cadena), stdin);

    int lon;
    lon=strlen(cadena);
    printf("La longitud del texto ingresado es %i", lon);
    printf("\n");
}
