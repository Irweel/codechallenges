#include <stdio.h>

int main(){
    int i=1;
    int lista[10];
    while (i<10){
        lista[i]=i;
        printf("%d ,", lista[i]);
        i++;
    }
    printf("\n");
}
