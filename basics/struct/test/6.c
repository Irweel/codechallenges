// 32. Cree una estructura que almacene los lados a y b de un triángulo
// rectángulo (obtenidos al azar en un rango de [1,100] solo números
// enteros) y su hipotenusa.
// En total son 10 triángulos. Además debe agregar un campo llamado
// «código» de tipo char para identificar al triangulo (‘A’, ‘B’, ‘C’, …,‘J’).
//  Al ingresar el código, el usuario podrá mostrar y editar los datos del
// triángulo correspondiente.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 10

struct figura{
    int a, b;
    float h;
};


void generar(struct figura t[]){
    int i;
    for(i=0; i<n; i++){
        t[i].a=rand()%100+1;
        t[i].b=rand()%100+1;
        t[i].h=(float)sqrt(pow(t[i].a, 2) + pow(t[i].b, 2));
    }
}

void cambiar(struct figura t[], int x){
    char opt, cha;
    while(getchar()!='\n');
    printf("Desea cambia los datos? [s/n]: \n");
    scanf("%c", &opt);
    if(opt=='s'){
        printf("Que desea cambiar?\n");
        printf("a. Cateto 1,   b. Cateto 2.\n");
        while(getchar()!='\n');
        scanf("%c", &cha);
        switch(cha){
            case 'a':
                printf("Ingrese nuevo valor: ");
                scanf("%d", &t[x].a);
                break;
            case 'b':
                printf("Ingrese nuevo valor: ");
                scanf("%d", &t[x].b);
                break;
            case 'x':
                printf("OK.");
                return;
            default:
                printf("No es una opcion valida.\n");
                break;
        }
        t[x].h=(float)sqrt(pow(t[x].a, 2) + pow(t[x].b, 2));
    }
}

void codigo(struct figura t[]){
    char id;
    while(1){
        printf("Elija una letra por el triangulo que quiere ver:\n");
        printf("Las opciones van desde la A a la J, X para salir:\n");
        while(getchar()!='\n');
        scanf("%c", &id);
        switch(id){
            case 'a':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[0].a, t[0].b, t[0].h);
                cambiar(t, 0);
                break;
            case 'b':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[1].a, t[1].b, t[1].h);
                cambiar(t, 1);
                break;
            case 'c':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[2].a, t[2].b, t[2].h);
                cambiar(t, 2);
                break;
            case 'd':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[3].a, t[3].b, t[3].h);
                cambiar(t, 3);
                break;
            case 'e':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[4].a, t[4].b, t[4].h);
                cambiar(t, 4);
                break;
            case 'f':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[5].a, t[5].b, t[5].h);
                cambiar(t, 5);
                break;
            case 'g':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[6].a, t[6].b, t[6].h);
                cambiar(t, 6);
                break;
            case 'h':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[7].a, t[7].b, t[7].h);
                cambiar(t, 7);
                break;
            case 'i':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[8].a, t[8].b, t[8].h);
                cambiar(t, 8);
                break;
            case 'j':
                printf("Triangulo:%c, catetos: %d, %d, hipotusa: %0.2f.\n", id, t[9].a, t[9].b, t[9].h);
                cambiar(t, 9);
                break;
            case 'x':
                printf("Adios.\n");
                return;
            default:
                printf("Opcion no valida.\n");
                break;
        }
    }
}

int main(){
    struct figura triangulo[n];
    srand(time(NULL));
    generar(triangulo);
    codigo(triangulo);
    return 0;
}
