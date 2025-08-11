#include <stdio.h>

int main() {
    float valor, valorFinal;
    int estado;

    printf("1. Minas Gerais \n");
    printf("2. Sao Paulo \n");
    printf("3. Rio de Janeiro \n");
    printf("4. Mato Grosso do Sul \n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &estado);

    if ((estado == 1) || (estado == 2) || (estado == 3) || (estado == 4)) {
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    if (estado == 1) {
    valorFinal = valor * 1.07;
    printf("O valor final e: %0.2f", valorFinal);
    }

    if (estado == 2) {
    valorFinal = valor * 1.12;
    printf("O valor final e: %0.2f", valorFinal);
    }

    if (estado == 3) {
    valorFinal = valor * 1.15;
    printf("O valor final e: %0.2f", valorFinal);
    }

    if (estado == 4) {
    valorFinal = valor * 1.08;
    printf("O valor final e: %0.2f", valorFinal);
    }
    }

    if ((estado != 1) && (estado != 2) && (estado != 3) && (estado != 4)) {
        printf("Opcao invalida");
    }

    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
