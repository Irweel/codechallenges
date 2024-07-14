// Ejemplo 5: se genera un vector de 100 números aleatorios (del 0 al 10), luego
// el usuario elige una cantidad menor o igual a 100 para hallar su promedio.
// Para el promedio debe utilizarse una función.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 100

int c;


// ATENCION! Las funciones no devuelven arreglos, solo datos de tipo escalar
// es decir, punteros, numericos (float, doible, int) y caracteres
// Si queremos usar eso hay q usar procedimientos.
// Aqui como se ve solo reciben un arreglo pero no devuelven uno
// sino un valor numero y una impresion

float promedio(int v[]){
    int i, s=0;
    for(i=0; i<c; i++){
        s=s+v[i];
    }
    return((float) s/c);
}


int mostrar(int v[]){
    int i;
    for(i=0; i<n; i++){
        printf("%3d", v[i]);
    }
}


int main(){
    int i, vec[n];

    srand(time(NULL));
    for(i=0; i<n; i++){
        vec[i]=rand()%11;
    }
    printf("\nEl vector\n");
    mostrar(vec);
    printf("\nIngrese la cantidad de elementos para el promedio del vector: ");
    scanf("%d", &c);
    printf("\nEl promedio es: %0.2f\n",promedio(vec));
    return 0;
}

