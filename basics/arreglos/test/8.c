// Escriba un programa que genere un vector de 30 vocales al azar, lo
// muestre y cuente la cantidad de vocales «a» y «o». Mostrar resultado.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main(){
    int i, r, x;
    int suma=0;
    int sumo=0;
    srand(time(NULL));
    char v[]={'a','e','i','o','u'};
    char a[n];

    for(i=0; i<n; i++){
        r=rand()%5;
        a[i]=v[r];
        printf(" %c, ", a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]=='a'){
            suma=suma+1;
        }
        else if(a[i]=='o'){
            sumo=sumo+1;
        }
    }
    printf("\n");
    printf("Cantidad de 'a': %d, Cantidad de 'o': %d .\n", suma, sumo);
}
