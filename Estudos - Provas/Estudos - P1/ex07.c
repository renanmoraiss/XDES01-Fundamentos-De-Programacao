#include <stdio.h>

int main() {
    int nascimento, anoAtual, idade, idadeEm2050;
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    idade = anoAtual - nascimento;
    printf("Voce tem %d anos\n", idade);
    idadeEm2050 = 2050 - nascimento;
    printf("Em 2025 voce tera %d anos", idadeEm2050);
    return 0;
}