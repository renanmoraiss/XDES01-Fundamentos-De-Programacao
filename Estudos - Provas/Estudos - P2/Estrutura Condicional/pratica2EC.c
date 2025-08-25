#include <stdio.h>

void preencheValor(int *valor1, int *valor2, int *valor3);
int retornaMaior(int *valor1, int *valor2, int *valor3);

int main() {
    int n1, n2, n3, maior;
    //
    preencheValor(&n1, &n2, &n3);
    //
    maior = retornaMaior(&n1, &n2, &n3);
    printf("Maior: %d", maior);
    //
    return 0;
}

void preencheValor(int *valor1, int *valor2, int *valor3) {
    printf("Digite o primeiro valor: ");
    scanf("%d", valor1);
    //
    printf("Digite o segundo valor: ");
    scanf("%d", valor2);
    //
    printf("Digite o terceiro valor: ");
    scanf("%d", valor3);
}

int retornaMaior(int *valor1, int *valor2, int *valor3) {
    if ((*valor1 > *valor2) && (*valor1 > *valor3)) {
        return *valor1;
    } else if ((*valor2 > *valor1) && (*valor2 > *valor3)) {
        return *valor2;
    } else if ((*valor3 > *valor1) && (*valor3 > *valor2)) {
        return *valor3;
    }
}