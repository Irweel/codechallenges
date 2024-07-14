#include <stdio.h>

// 2 Nested loops
// 2D array



int main() {

    int nums [3][2] = {
                        {1, 2},
                        {3, 4},
                        {5, 6}
                    };
    int i, j;

    for (i=0; i<3; i++){
       for(j=0; j<2; j++){
            printf("%d , ", nums[i][j]);
       }
    }
    printf("\n");

    // O (n^2)
    // Doble bluce ;)
}
