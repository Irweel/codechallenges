// Ejemplo 20: Ingresar dos textos y concatenarlos. Mostrar el resultado en
// Mayúscula y minúscula.
//
//
// strcat («cadena de caracteres 1», «cadena de caracteres 2»): esta función
// concatena las dos cadenas y deja el resultados en «cadena de caracteres1»
//
// strupr («cadena de caracteres»): Convierte las letras minúsculas en Mayúscula
// (a – z) otros caracteres no se modifican.
//
// Ejemplos: cadena1[]={‘R’,’í’,’o’, ,’N’,’e’,’g’,’r’,’o’};
// cadena2[]=strupr(cadena1);
//
// strlwr («cadena de caracteres»): Convierte las letras Mayúsculas en
// minúsculas (A – Z) otros caracteres no se modifican.
//


#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define n 30

int main(){
    char cadena1[n];
    char cadena2[n];
    printf("Ingrese un texto: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    printf("Ingrese otro texto: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    strcat(cadena1,cadena2);

    printf("xd: \n");
        printf("%s. \n", cadena1);
        printf("%s. \n", toupper(cadena1) );
        printf("%s. \n", cadena2 );
    }
