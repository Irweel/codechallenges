// Escriba un programa que genere un vector de nombre «todos» con
// 30 enteros al azar cada uno (del 1 al 10) y crear dos vectores llamados
// «par» e «impar» para guardar en el primero todos los números pares
// del vector «todos» y en el segundo, los impares. Mostrar todos los
// vectores. No debe mostrar «basura».
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 30

int main(){
    int todos[n];
    int par[n]={0};
    int impar[n]={0};
    int i, r;
    int j=0;
    int y=0;
    srand(time(NULL));

    for(i=0; i<n; i++){
        r=rand()%10+1;
        todos[i]=r;
    }
    for(i=0; i<n; i++){
        if(todos[i]%2==0){
            par[j]=todos[i];
            j=j+1;
        }
        else{
            impar[y]=todos[i];
            y=y+1;
        }

    }
    for(i=0; i<n; i++){
        printf("%d, ", todos[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        printf("%d, ", par[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        printf("%d, ", impar[i]);
    }
    printf("\n");

}
