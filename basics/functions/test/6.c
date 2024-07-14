// 6. Ingrese a un vector de 20 posiciones números de un dado al azar,
// cuente la cantidad de 6 y sustituya el 5 por el 3
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 20

void generarDado(int v[]){
    int i;
    for(i=0; i<n; i++){
        v[i]=rand()%6+1;
        printf("%d ", v[i]);
    }
    printf("\n");
}
int contarDado(int v[]){
    int i, sum=0;
    for(i=0; i<n; i++){
        if(v[i]==6)
            sum++;
    }
    return sum;
}

void cambiarDado(int v[]){
    int i;
    for(i=0; i<n; i++){
        if(v[i]==5)
            v[i]=3;
        printf("%d ", v[i]);
    }
    printf("\n");
}


int main(){
    int v[n];
    srand(time(NULL));
    generarDado(v);
    printf("La cantidad de 6 son: %d.\n", contarDado(v));
    cambiarDado(v);
    return 0;
}
