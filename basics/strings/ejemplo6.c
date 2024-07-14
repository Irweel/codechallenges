// Ejemplo 19: ingresar dos cadenas de caracteres para compararlas y mostrar
// si «son iguales» o «no son iguales»
//
//
// strcmp («cadena de caracteres 1», «cadena de caracteres 2»): esta fun-
// ción devuelve un valor numérico según la comparación efectuada entre las
// dos cadenas de caracteres. Los resultados pueden ser 1, 0 o -1.
//

#include <stdio.h>
#include <string.h>

#define n 30

int main(){
    char cadena1[n], cadena2[n];

    printf("Escriba una primera oracion: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    printf("\n");
    printf("Escriba una segunda oracion: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    printf("\n");
    if(strcmp(cadena1,cadena2)==0){
        printf("Las cadenas son iguales.");
    }
    else{
        printf("Las cadenas son distintas");
    }

    printf("\n");

}
