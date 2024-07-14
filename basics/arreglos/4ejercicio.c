#include <stdio.h>

#define n 5

int main(){
    int i;
    int l[n]={0};
    int e[n]={0};
    char c[n];
    int t, p;
    for(i=0; i<n; i++){
        printf("Ingrese legajo: \n");
        scanf("%d", &l[i]);
        printf("Ingrese edad: \n");
        scanf("%d", &e[i]);
        printf("Ingrese Carrera: \n");
        scanf(" %c", &c[i]);
    }
    printf("Lista de inscriptos: \n");
    for(i=0; i<n; i++){
        printf("Id: %i, Legajo: %d, Edad: %d, Carrera: %c \n", i, l[i], e[i], c[i]);
    }

    for(i=0; i<n; i++){
        if(t<e[i]){
            t=e[i];
            p=i;
        }
    }
    printf("El alumno mas grande( %d) tiene legajo (%d) y es de la carrera(%c)", t, l[p], c[p]);

}
