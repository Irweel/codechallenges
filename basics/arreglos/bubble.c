#include <stdio.h>

#define n 5

int main(){
    int i, j, aux;
    int v[]={6, 8, 1, 7, 4};
    for(i=0; i<5; i++){
        printf("%d, ", v[i]);
    }
    printf("\n ");

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    for(i=0; i<5; i++){
        printf("%d, ", v[i]);
    }
}
