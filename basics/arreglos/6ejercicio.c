#include <stdio.h>

#define n 10

int main(){
    char VC[]={'a','n','r','i','t','o','n','g','i','m'}, aux;
    int i, j;

    printf("Lista entera de caracteres: ");
    for(i=0; i<n; i++){
        printf("%c - ", VC[i]);
    }
    printf(" \n");
    printf("Lista ordenada de caracteres: ");

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(VC[i]>VC[j]){
                aux=VC[i];
                VC[i]=VC[j];
                VC[j]=aux;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%c - ", VC[i]);
    }
    printf(" \n");
}
