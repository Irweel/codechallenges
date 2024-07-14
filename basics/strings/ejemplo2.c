#include <stdio.h>

#define N 30

int main(){
    int i;
    char cadena[N];

    printf("Escriba una palabra corta: \n");

//    scanf("%s", &cadena);
//    (forma nomal)
//
//    gets(cadena);
//    forma con espacios (deprecated)
//
//    Actual para tener espacios ↧ :

    fgets(cadena, sizeof(cadena), stdin);
    printf("La palabra que ud escribrio es: %s. \n", cadena);

}
