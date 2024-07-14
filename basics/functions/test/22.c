// 22. Desarrolle las funciones y procedimientos de acuerdo y acorde al si-
// guiente cuerpo del programa:
//
// #include<stdio.h>
// #define N 20
// int main() {
//    int v1[N], v2[N], v3[N], m[3][N];
//    srand(time(NULL);
//    // CargarVector(v1); →Carga a un vector de N elementos números
//                          aleatorios enteros de [-10,10]
//    MostrarVector(v1);
//    CargarVector(v2); →Carga a un vector de N elementos números
//                          aleatorios enteros de [-10,10]
//    MostrarVector(v2);
//    CargarVector(v3); →Carga a un vector de N elementos números
//                          aleatorios enteros de [-10,10]
//    MostrarVector(v3);
//    ArmarMatriz(v1,v2,v3,m); →Con los tres vectores se arma una
//                          matriz de 3 X N
//    MostrarMatriz(m);
//    printf(“\n El Promedio es %0.2f “,PromedioMatriz(m));
//    return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

void CargarVector(int x[]){
    int i, j;
    for(i=0; i<N; i++){
        x[i]=rand()%21-10;
    }
}
void MostrarVector(int x[]){
    int i, j;
    for(i=0; i<N; i++){
        printf("%3i", x[i]);
    }
    printf("\n");
}
void ArmarMatriz(int x[], int y[], int z[], int m[][N]){
    int j;
    for(j=0; j<N; j++){
        m[0][j]=x[j];
        m[1][j]=y[j];
        m[2][j]=z[j];
    }
}
void MostrarMatriz(int m[][N]){
    int i, j;
    printf("\n");
    for(i=0; i<3; i++){
        for(j=0; j<N; j++){
            printf("%3i", m[i][j]);
        }
    printf("\n");
    }
}
float PromedioMatriz(int m[][N]){
    int i, j;
    float sum=0;
    for(i=0; i<3; i++){
        for(j=0; j<N; j++){
            sum=sum+m[i][j];
        }
    }
    i=0;
    i=3*N;
    return sum/i;
}

int main() {
    int v1[N], v2[N], v3[N], m[3][N];
    srand(time(NULL));
    CargarVector(v1);
    MostrarVector(v1);
    CargarVector(v2);
    MostrarVector(v2);
    CargarVector(v3);
    MostrarVector(v3);
    ArmarMatriz(v1,v2,v3,m);
    MostrarMatriz(m);
    printf("\n El Promedio es %0.2f.\n",PromedioMatriz(m));
    return 0;
}
