#include<stdio.h>
// Compilar con:
// gcc -fno-stack-protector array.c -o array
// Para omitir stack smashing

int main(){
    int ju[3];
    int n;
    printf("Ingrese basura \n");
    scanf("%d", &ju[0]);
    scanf("%d", &ju[1]);
    scanf("%d", &ju[2]);
    scanf("%d", &ju[3]);
    printf("Ingrese numero de la lista al cual quiere acceder \n");
    scanf("%d", &n);
    printf("Su numero es el %d \n", ju[n]);
}
