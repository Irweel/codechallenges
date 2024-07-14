// Ejemplo17: se asigna la palabra «Argentina» a un arreglo de caracteres lla-
// mado «pais».
//
// strcpy («variable de arreglo», «cadena a asignar»): para asignar una
// expresión de cadena a un arreglo de caracteres, no se puede utilizar el
// operador de asignación (=). Para ello, debe utilizarse la función strcpy.

#include <stdio.h>
#include <string.h>

#define n 30

int main(){
   char pais[n];
   strcpy(pais,"Argentina");
   printf("El pais es %s", pais);
   printf("\n");
}
