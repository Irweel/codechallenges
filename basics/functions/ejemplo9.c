// Ejercicio 9: realizar una mini calculadora con las operaciones básicas
// (suma, resta, división y multiplicación) usando menú
//
// La intención es que se muestre el funcionamiento del menú. In
// tente resolver el ejercicio de la calculadora con un while (y no con un
// do – while) para evitar dicho inconveniente. Por lo general, los menús
// con muchas opciones van acompañados de un switch

#include <stdio.h>

float sumar(float a,float b){
    return(a+b);
}
float restar(float a,float b){
    return(a-b);
}
float multiplicar(float a,float b){
    return(a*b);
}
float dividir(float a,float b){
    return(a/b);
}
int main(){
    int opcion=0;
    float n1,n2;
    while(opcion!=5){
        printf("\n 1 - SUMAR");
        printf("\n 2 - RESTAR");
        printf("\n 3 - DIVIDIR");
        printf("\n 4 - MULTIPLICAR");
        printf("\n 5 - SALIR");
        printf("\n---------------------");
        printf("\n Ingrese los dos números: ");
        scanf("%f %f",&n1, &n2);
        printf("\n Ingrese la opción: ");
        scanf("%i",&opcion);
        switch(opcion){
            case 1:
                printf("\nEl resultado es %0.2f\n",sumar(n1,n2));
                break;
            case 2:
                printf("\nEl resultado es %0.2f\n",restar(n1,n2));
                break;
            case 3:
                if(n2!=0.0)
                    printf("\nEl resultado es %0.2f\n",dividir(n1,n2));
            else
                printf("\n ERROR");
                break;
            case 4:
                printf("\nEl resultado es %0.2f\n",multiplicar(n1,n2));
                break;
            default:
                opcion>=5;
                printf("\n Gracias y Buena Suerte!!!\n");
                break;
        }
    }
}
