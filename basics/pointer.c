#include <stdio.h>

// Un puntero es un tipo de dato, como lo puede ser un int o un char
// pero que representa una direccion  en memoria


// Deference  pointer, es ir a la direccion de memoria de ese puntero y agarra su informacion


int main() {

   int age = 30;

   int * pAge = &age;

   printf("age's memory address: %p\n", &pAge);

   printf("age's memory data: %d \n", *pAge);

// Para dederenciar lo que hay que hacer es ir a esa direccion fisica y tomar
// esa informacion. Para esto uso el * en vez del &, y dado que ya no se imprimira
// en pantalla una direccion sino otro tipo de dato, en este caso un numero entero
// se cambia el %p por %d.

// printf("age's memory data: %d \n", &*&*&age); En este caso por ejemplo, cargara o la direccion
// de memoria o el valor de la variable, dependiende de que este primero, si un & o un *.
}
