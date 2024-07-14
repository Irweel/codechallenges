// Cree dos vectores paralelos de 30 elementos. Uno debe contener voca-
// les y el otro números del 1 al 10. Ambos generados al azar. Luego mos-
// trar solo las vocales donde su vector paralelo tenga números impares.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30


int main(){
    int i, r;
    char v[]={'a','e','i','o','u'};
    int num[n];
    char voc[n];
    srand(time(NULL));
    for(i=0; i<n; i++){
        r=rand()%10+1;
        num[i]=r;
    }

    for(i=0; i<n; i++){
        r=rand()%5;
        voc[i]=v[r];
    }

    for(i=0; i<n; i++){
            printf("%d, ", num[i]);
            printf("%c, ", voc[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        if(num[i]%2!=0){
            printf("%c, ", voc[i]);
        }
    }

    printf("\n");

}

