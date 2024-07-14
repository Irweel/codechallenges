// 25. Realice la siguiente serie: 1/1 + 1/2 + 1/ 3 + . . .1/ n
// sabiendo que n (natural) debe ingresarlo el usuario.
//

#include <stdio.h>

double sumatoria(int x){
    double y;
    if(x==1)
        return 1.0;
    else{
        y = 1.0/x + sumatoria(x-1);
        return y;
    }
}

int main(){
    int n;
    printf("Ingrese un numero natural: ");
    scanf("%d", &n);
    double sum = sumatoria(n);
    printf("La sumatoria de 1/%d es %0.2f.\n", n, sum);
    return 0;
}
