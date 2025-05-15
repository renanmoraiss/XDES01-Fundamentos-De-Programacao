#include <stdio.h>

int main() {
    int vet[5];
    //
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vet[i]);
    }
    //
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: %d\n", i, vet[i]);
    }
    //
    return 0;
}