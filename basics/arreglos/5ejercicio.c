#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 100

int main(){

    int v[n];
    int r, i, c;
    srand(time(NULL));

    for(i=0; i<n; i++){
        v[i]=rand()%7000;
        printf("%d, ", v[i]);
    }
    for(i=0; i<n; i++){
        if(r<v[i]){
            r = v[i];
        }
    }
    printf("El maximo valo de un vector N es: %d \n", r);
}
