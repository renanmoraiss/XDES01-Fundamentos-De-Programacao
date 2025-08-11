#include <stdio.h>

void preencheValor(float *valor1, float *valor2);
float retornaMenor(float *valor1, float *valor2);

int main() {
    float n1, n2;
    float menor;
    //
    preencheValor(&n1, &n2);
    //
    menor = retornaMenor(&n1, &n2);
    printf("Menor: %0.2f\n", menor);
    //
    return 0;
}

void preencheValor(float *valor1, float *valor2) {
    printf("Digite o primeiro valor: ");
    scanf("%f", valor1);
    //
    printf("Digite o segundo valor: ");
    scanf("%f", valor2);
}

float retornaMenor(float *valor1, float *valor2) {
    if (*valor1 < *valor2) {
        return *valor1;
    } else {
        return *valor2;
    }
}// update for commit
// update for commit
