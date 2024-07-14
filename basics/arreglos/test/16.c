// Cree dos vectores paralelos de 12 elementos c/u. Uno llamado «vo-
// cales», que debe contener vocales, y el otro llamado «números» que
// contenga enteros del 1 al 10. Ambos generados al azar. Hallar la su-
// matoria del vector «números» siempre y cuando su paralelo «vocales»
// contenga la letra «e».

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 12

int main(){
    int i, r, numeros[n];
    int sum=0;
    char vocales[n];
    char c[5]={'a', 'e', 'i', 'o', 'u'};

    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%10+1;
        numeros[i]=r;
        printf("%d, ", numeros[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){
        r=rand()%5;
        vocales[i]=c[r];
        printf("%c, ", vocales[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){
        if(vocales[i]=='e'){
            sum=sum+numeros[i];
        }
    }

    printf("Suma de todos los vectores con 'e': %d .", sum);

    printf("\n");

}
