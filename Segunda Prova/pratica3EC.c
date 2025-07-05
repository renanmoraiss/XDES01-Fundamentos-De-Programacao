#include <stdio.h>

void preencheValor(int *valor1);
void valorParOuImpar(int *valor1);

int main () {
    int n1;
    //
    preencheValor(&n1);
    //
    valorParOuImpar(&n1);
    //
    return 0;
}

void preencheValor(int *valor1) {
    printf("Digite um valor inteiro: ");
    scanf("%d", valor1);
}

void valorParOuImpar(int *valor1) {
    if (*valor1 % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }
}