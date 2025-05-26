#include <stdio.h>

int main() {
    float notas[10];

    //inserir os valores no vetor
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%f", &notas[i]);
    }

    //alterar os valores do vetor
    for (int i = 0; i < 10; i++) {
        notas[i] = notas[i] / 2.0;
    }

    //imprimir os valores do vetor
    for (int i = 0; i < 10; i++) {
        printf("Valor da posicao %d: %0.2f\n", i, notas[i]);
    }

    return 0;
}