// 28. Del anterior, agregue lo siguiente: halle la cantidad total de población
// y promedio total de superficie.
//

#include <stdio.h>

#define n 4

struct datos{
    int tel;
    char c;
    int pob;
    int sup;
};

void generar(struct datos p[]){
    int i;
    for(i=0; i<n; i++){
        printf("Codigo de area telefonico: ");
        scanf("%d", &p[i].tel);
        while(getchar()!='\n');
        printf("Continente: ");
        scanf("%c", &p[i].c);
        while(p[i].c !='a' && p[i].c !='b' && p[i].c !='c' && p[i].c !='o' && p[i].c !='e'){
            printf("Continente no valido, intente de nuevo.\n");
            printf("Continente: ");
            scanf("%c", &p[i].c);
        }
        printf("Poblacion: ");
        scanf("%d", &p[i].pob);
        printf("Superficie: ");
        scanf("%d", &p[i].sup);
        printf("\n");
    }
}
void mostrar(struct datos p[]){
    int i;
    for(i=0; i<n; i++){
        printf("Codigo de area telenico: %d, Continente: ", p[i].tel);
        switch(p[i].c){
            case 'a':
                printf("America");
                break;
            case 'b':
                printf("Asia");
                break;
            case 'c':
                printf("Africa");
                break;
            case 'e':
                printf("Europa");
                break;
            case 'o':
                printf("Oceania");
                break;
        }
        printf(", Poblacion: %d, Superficie: %d.\n",p[i].pob ,p[i].sup);
    }
}

int total(struct datos p[]){
    int i, sum=0;
    for(i=0; i<n; i++){
        sum=sum+p[i].pob;
    }
    return sum;
}
int promedio(struct datos p[]){
    int i, sum=0;
    for(i=0; i<n; i++){
        sum=sum+p[i].sup;
    }
    return sum/n;
}

int main(){
    struct datos paises[n];
    generar(paises);
    mostrar(paises);
    printf("Poblacion total: %d.\n", total(paises));
    printf("Promedio de superficie: %d.\n", promedio(paises));
    return 0;
}
