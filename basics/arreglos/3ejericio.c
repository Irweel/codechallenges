// Hallar la frecuencia de números de un dado, sabiendo que fueron 100 los tiros.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 100

int main(){
    int frecuencia[6]={0},i, r;


    // notese como r e i son declarados como ints en la misma linea que el array f.
    // pero sin tener nada que ver. Ademas{0} estable valor predeterminado de los
    // elementos del array para no tener valores "garbage"

    srand(time(NULL));

    for(i=0; i<N; i++){
        r=rand()%6+1;
        switch(r){
            case 1:
                frecuencia[0]++;
                break;
            case 2:
                frecuencia[1]++;
                break;
            case 3:
                frecuencia[2]++;
                break;
            case 4:
                frecuencia[3]++;
                break;
            case 5:
                frecuencia[4]++;
                break;
            case 6:
                frecuencia[5]++;
                break;
        }
    }
        printf("\n La frecuencia de cada número del dado es la siguiente: \n ");
        for(i=0; i<6; i++){
            printf("\n El numero %i salio %i veces", i+1,frecuencia[i]);
        }
}

// Sabemos que la operación % nos devuelve el resto de dividir rand() con
//  11. Este resto puede ir de 0 a 10. Si en cambio queremos obtener números
//   del 0 al 100 tendremos que utilizar:
//      n_azar = rand() % 101;
//   Es decir que siempre será N+1. n_azar = rand() % (N+1); para obtener un
//   rango de 0 a N.
//  Pero para el caso de la obtención al azar de las caras de un dado, su rango
//  será 1..6 descartando el cero. La solución es muy simple, se le suma un 1.
//     n_azar = rand() % 6+1;
//  Pasamos a explicar: con solo rand()%6 se obtienen números al azar del 0
//   al 5, pero sumando uno se desplaza el rango obteniendo números del 1 al 6.
//  Si queremos obtener números del 10 al 20 entonces escribiremos:
//     n_azar = rand () % 11 + 10;
//  En general se obtiene de la siguiente manera: n_azar = rand () % (M-N+1) + N;
//  Siendo M el límite superior del intervalo y N, el inferior.
// En el ejemplo anterior será: N igual a 10 y M a 20.
