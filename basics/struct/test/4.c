// 30. Cree una estructura que almacene x y f(x).
// La función es la siguiente: f(x) = cos(x)2-3x.
// Con x ϵ [-10, 10] con pasos de 0.5 automáticamente. Muestre los datos.
//

#include <stdio.h>
#include <math.h>

struct datapoint{
    double x;
    double fx;
};

int main(){
    double start_x = -10.0;
    double end_x = 10.0;
    double step = 0.5;

    int num_points = (int)((end_x - start_x) / step) + 1;

    struct datapoint data[num_points];

    for(int i=0; i<num_points; i++){
        data[i].x = start_x + i * step;
        data[i].fx = pow(cos(data[i].x),2) - 3 * data[i].x;
    }

    printf(" x     | f(x)\n");
    printf("---------------\n");
    for (int i = 0; i < num_points; i++) {
        printf("%.2lf   | %.2lf\n", data[i].x, data[i].fx);
    }

    return 0;
}
