// Escriba un programa que genere un vector de 30 vocales al azar, lo
// muestre, luego lo ordene de modo ascendente y vuelva a mostrar-
// lo. Por último, cuente la cantidad de vocales «a», «e», «i», «o», «u»
// usando un vector contador cantvocales[5]={0}, donde la posición 0
// esté relacionada con la cantidad de vocales «a», la posición 1, con la
// «e», etcétera.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main(){
    int i, r, j, aux;
    char v[]={'a','e','i','o','u'};
    char x[n];
    int cantvocales[5]={0};
    srand(time(NULL));

    for(i=0; i<n; i++){
       r=rand()%5;
       x[i]=v[r];
       printf("%c, ", x[i]);
    }
    printf("\n");
    printf("Ordenada: \n");
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
       printf("%c, ", x[i]);
    }
    for(i=0; i<n; i++){
        switch(x[i]){
            case 'a':
                cantvocales[0]=cantvocales[0]+1;
                break;
            case 'e':
                cantvocales[1]=cantvocales[1]+1;
                break;
            case 'i':
                cantvocales[2]=cantvocales[2]+1;
                break;
            case 'o':
                cantvocales[3]=cantvocales[3]+1;
                break;
            case 'u':
                cantvocales[4]=cantvocales[4]+1;
                break;
        }
    }
    printf("\n");
    printf("A: %d, E: %d, I:%d, O:%d, U:%d ", cantvocales[0], cantvocales[1], cantvocales[2], cantvocales[3], cantvocales[4]);


    printf("\n");
}
