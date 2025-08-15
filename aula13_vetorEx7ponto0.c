#include <stdio.h>

int main() {
    int vetorA[5] = {10, 20, 30, 40, 50};
    int vetorB[5] = {2, 4, 6, 8, 10};
    int vetorC[5];
    //
    printf("A: ");
    for (int i = 0; i < 5; i ++) {
        printf("%d\t", vetorA[i]);
    }
    printf("\n");
    //
    printf("B: ");
    for (int i = 0; i < 5; i ++) {
        printf("%d\t", vetorB[i]);
    }
    printf("\n");
    //
    printf("C: ");
    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%d\t", vetorC[i]);
    }
    return 0;
}