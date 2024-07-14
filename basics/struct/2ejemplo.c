// Ejercicio 14: Realizar el ejercicio anterior utilizando funciones y procedimientos

#include <stdio.h>

#define n 3

struct miestructura{
    int legajo, edad;
    double sueldo;
    char categoria;
};

void generar(struct miestructura emp[]){
    int i;
    for(i=0; i<n; i++){
        printf("Ingrese numero de legajo: ");
        scanf("%d", &emp[i].legajo);
        printf("Ingrese edad: ");
        scanf("%d", &emp[i].edad);
        printf("Ingrese numero de sueldo: ");
        scanf("%lf", &emp[i].sueldo);
        while(getchar()!='\n');
        printf("Ingrese categoria: ");
        scanf("%c", &emp[i].categoria);
        printf("\n");
    }
}

void ordenar(struct miestructura emp[]){
    int i, j;
    struct miestructura aux;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(emp[i].legajo > emp[j].legajo){
                aux=emp[i];
                emp[i]=emp[j];
                emp[j]=aux;
            }
        }
    }
}

void mostrar(struct miestructura emp[]){
    int i;
    for(i=0; i<n; i++){
        printf("Legajo: %d, Edad: %d, Sueldo:$%0.4f, Categoria:%c.\n", emp[i].legajo,
                emp[i].edad, emp[i].sueldo, emp[i].categoria);
    }
}
int main(){
    struct miestructura empleado[n];
    generar(empleado);
    ordenar(empleado);
    mostrar(empleado);
    return 0;
}
