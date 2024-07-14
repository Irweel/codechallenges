// Ejemplo 7: implementar un programa que genere con números aleatorios dos
// vectores v1 y v2 de N enteros que oscilan entre (0 y el 10), luego mostrarlo.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define n 30

void generar(int v[]){
    int i;
    for(i=0; i<n; i++){
            v[i]=rand()%10;
    }
}

void mostrar(int v[]){
    int i;
    for(i=0; i<n; i++){
        printf("%3i", v[i]);
    }
}



int main(){
    int v1[n], v2[n];
    srand(time(NULL));
    generar(v1);
    generar(v2);
    printf("El Vector 1\n");
    mostrar(v1);
    printf("\n");
    printf("El Vector 2\n");
    mostrar(v2);
    printf("\n");
    return 0;

}
