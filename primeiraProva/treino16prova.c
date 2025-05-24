#include <stdio.h>
int main() {
int nascimento, idade;
printf("Digite o seu ano de nascimento: ");
scanf("%d", &nascimento);
idade = 2025 - nascimento;
if ((idade >= 12) && (idade <= 15)) {
    printf("Com %d anos voce pode participar do campeonato", idade);
} else {
    printf("Com %d anos voce nao pode participar do campeonato", idade);
}
return 0;
}

/*
ALGORITMO

DECLARE nascimento, idade INTEIRO
ESCREVA("Digite o seu ano de nascimento: ")
LEIA (nascimento)

idade = 2025 - nascimento

SE ((idade >= 12) E (idade <= 15)) ENTÃO
ESCREVA("voce pode participar do campeonato")
SENÃO 
ESCREVA("voce nao pode participar do campeonato")
FIM_SE

FIM_ALGORITMO
*/