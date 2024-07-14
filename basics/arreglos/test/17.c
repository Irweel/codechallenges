// Escriba un programa que inicialice un vector de 100 elementos con
// los números de un dado (al azar) e indique la frecuencia de cada
// número. Se recomienda usar un vector contador cantdado[6]={0},
// donde la posición 0 esté relacionada con la cantidad de unos del
// dado, la posición 1, con las caras «dos», etcétera.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 100

int main(){
    int i, r, cant[n];
    int cantdado[6]={0};

    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%6+1;
        cant[i]=r;
        printf("%d, ", cant[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){
        switch(cant[i]){
            case 1:
                cantdado[0]++;
                break;
            case 2:
                cantdado[1]++;
                break;
            case 3:
                cantdado[2]++;
                break;
            case 4:
                cantdado[3]++;
                break;
            case 5:
                cantdado[4]++;
                break;
            case 6:
                cantdado[5]++;
                break;
        }
    }
    for(i=0; i<6; i++){
        printf("cantidad de %d: %d \n",  i+1, cantdado[i]);
    }
    printf("\n");
}



