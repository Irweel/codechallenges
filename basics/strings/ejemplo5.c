// Ejemplo 18: se asigna la palabra «Argentina» al arreglo «cadena1» y luego se
// le asigna a «cadena2» el contenido de «cadena1». Finalmente, se muestra el
// contenido de «cadena2».

#include <stdio.h>
#include <string.h>

#define n 30

int main(){
    char cadena1[n];
    strcpy(cadena1,"Argentina");
    char cadena2[n];
    strcpy(cadena2,cadena1);
    printf("El pais es %s", cadena2);
    printf("\n");

}
