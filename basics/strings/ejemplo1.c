// mostrar la palabra «Programación

#include <stdio.h>

int main(){
    char cadena[]="Programacion";
//  char cadena1[]="a"; equivale a cadena1[]={'a', '\0'} ;}
    int i=0;
    while(cadena[i]!='\0'){
        printf("%c", cadena[i]);
        i++;
    }
    printf("\n");
}
