// Use dos vectores que contengan x e y y muéstrelos. Tener en cuenta
// la función cuadrática #(x) = x^2 - 3x + 2/5
// con intervalos de 0,5. El límite inferior es -5 y el superior,
// 5 (usar dos decimales), tanto x como y deben estar almacenadas
// en los vectores vx y vy, respectivamente.


#include <stdio.h>

int main(){
    int i;
    float y, x=-5;
    float vx[21]={0};
    float vy[21]={0};

    for(i=0; i<21; i++){
        vx[i]=x;
        y= x*x - 3*x + 2/5;
        vy[i]=y;
        x=x+0.5;
    }

    for(i=0; i<21; i++){
        printf("Cuando la 'x' vale %.2f, la 'y' vale %.2f \n", vx[i], vy[i]);
    }

}
