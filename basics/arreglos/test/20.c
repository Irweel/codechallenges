// Escriba un programa que genere números al azar del 1 al 7 en un
// vector de 30 elementos. Éstos representan los números de la sema-
// na, en la medida en que van apareciendo los números, deberá agre-
// gar a otro vector de tipo char las letras correspondientes al día de
// semana. Por ejemplo: 1 es D, 2 es L, 3 es M, 4 es I, 5 es J, 6 es V y 7 es
// S. Mostrar ambos vectores.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main(){

    int i, x[n], r;
    char c[i];
    char d[7]={'D','L','M','I','J','V','S'};

    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%7+1;
        x[i]=r;
        printf("%d %c, ", x[i], d[r]);
    }

    printf("\n");
}
