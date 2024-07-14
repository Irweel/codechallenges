// Mostrar la cantidad de número negativos del arreglo

#include <stdio.h>

int main(){
    int i;
    int N;
    printf("Ingrese el tamaño de numeros a llenar: ");
    scanf("%d", &N);
    int arreglo[N];

    for(i=0; i<N; i++){
        printf("elemento %i:", i);
        scanf("%d", &arreglo[i]);
    }
    printf("Los numeros negativos ingresados son: ");

    // Fijemonos que podemos volver a usar el mimso valor de indice "i"
    //
    for(i=0; i<N; i++){
        if(arreglo[i]<0){
            printf("elemento %i: %d, ", i, arreglo[i]);
            printf("\n");
        }
    }
}
