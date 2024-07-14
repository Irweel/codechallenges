#include <stdio.h>
#include <stdlib.h>

// File es un datatype y creamos un puntero a un archivo fisico

// Dentro de los parametros de fopen ademas del nombre de archivo estan los filemodes.
// File modes da intrucciones de que queremos hacer con el archivo que abrimos
// r = read
// w = write
// a = append (agregar, si usamos fprint empezar con \n)

int main(){

    char line[225];

    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);

    //parametros: lugar donde se guarda la info, tamano maximo size, puntero al archivo

    printf("%s", line);



    //  fprintf(fpointer, "Jim, Salesman, \nPam, Receptionist\nOscar, Accounting");

    //  esta funcion escribe informacion en un archivo, el parametro fpointer establece en donde queremos
    //  escribir



    fclose(fpointer);

}
