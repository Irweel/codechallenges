#include <stdio.h>

int main(){
    char hola[50];
    fgets(hola, sizeof(hola), stdin);  // read string

    //scanf("%s", hola);
    printf("%s \n", hola);
}
