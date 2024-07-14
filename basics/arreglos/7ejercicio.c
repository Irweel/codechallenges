#include <stdio.h>

#define n 7

int main(){
    int VL[]={69,65,99,30,39,211,91};
    float VS[]={12000.00, 15550.50, 20480.80, 19000.75, 19000.75, 7600.00, 8000.95};
    float auxs;
    int i, j, aux;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(VL[i]>VL[j]){
                aux=VL[i];
                VL[i]=VL[j];
                VL[j]=aux;
                auxs=VS[i];
                VS[i]=VS[j];
                VS[j]=auxs;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("legajo: %d, salario: %7.2f .\n",  VL[i], VS[i]);
    }

// %4d means 4 spaces and then after print and same %7.2f,
// but  .2 indicate after point only show two values.
}
