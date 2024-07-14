// Ídem al ejercicio anterior, pero contando los números de la cara de
// un dado.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main(){
    int i, r, j, aux;
    char x[n];
    int cara[5]={0};
    srand(time(NULL));

    for(i=0; i<n; i++){
       r=rand()%6+1;
       x[i]=r;
       printf("%d, ", x[i]);
    }
    printf("\n");
    printf("Numeros Ordenados: \n");
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(x[i]>x[j]){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    for(i=0; i<n; i++){
       printf("%d, ", x[i]);
    }
    for(i=0; i<n; i++){
        switch(x[i]){
            case 1:
                cara[0]=cara[0]+1;
                break;
            case 2:
                cara[1]=cara[1]+1;
                break;
            case 3:
                cara[2]=cara[2]+1;
                break;
            case 4:
                cara[3]=cara[3]+1;
                break;
            case 5:
                cara[4]=cara[4]+1;
                break;
            case 6:
                cara[5]=cara[4]+1;
                break;
        }
    }
    printf("\n");
    printf("1: %d, 2: %d, 3:%d, 4:%d, 5:%d, 6:%d ", cara[0], cara[1], cara[2], cara[3], cara[4], cara[5]);
    printf("\n");
}
