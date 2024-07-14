// 26. Realice la siguiente serie: 1/2 + 2/3+ 3/4 + ... + n-1/n
// sabiendo que n (natural) debe ingresarlo el usuario.
//

#include <stdio.h>

double sumatoria(int x){
    double y;
    double z;
    if(x==1)
        return 0.0;
    else{
        z = x-1.0;
        y = z/x + sumatoria(x-1);
        return y;
    }

}

int main(){
    int n;
    printf("Ingrese un numero natural: ");
    scanf("%d", &n);
    double sum = sumatoria(n);
    printf("La sumatoria de %d/%d es %0.2f.\n", n-1, n, sum);
    return 0;
}
