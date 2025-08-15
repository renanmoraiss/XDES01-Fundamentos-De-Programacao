#include <stdio.h>

void exibeVetor(int vet[]);

int main() {
    //a)
    int A[6] = {1, 0, 5, -2, -5, 7};
    //b)
    int soma = 0;
    soma = A[0] + A[1] + A[5];
    printf("Soma = %d\n", soma);
    //c)
    A[3] = 100;
    //
    exibeVetor(A);
    //
    return 0;
}

void exibeVetor(int vet[]) {
    //d)
    for (int i = 0; i < 6; i++) {
        printf("%d\n", vet[i]);
    }
}