#include <stdio.h>

int main() {
    float n1, n2, media;
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    if ((media >= 0.0) && (media < 3)) {
        printf("Reprovado");
    }
    if ((media >= 3.0) && (media < 6)) {
        printf("Exame");
    }
    if ((media >= 6.0) && (media <= 10)) {
        printf("Aprovado");
    }
    return 0;
}

/*
ALGORITMO
DECLARE n1, n2, media REAL
ESCREVA ("Digite a primeira nota do aluno: ")
LEIA (n1)
ESCREVA ("Digite a segunda nota do aluno: ")
LEIA (n2)

media <- (n1 + n2) / 2

SE ((media >= 0.0) E (media < 3)) ENTÃO
ESCREVA("Reprovado")
FIM_SE

SE ((media >= 3.0) E (media < 6)) ENTÃO
ESCREVA("Exame")
FIM_SE

SE ((media >= 6.0) E (media <= 10)) ENTÃO
ESCREVA ("Aprovado")
FIM_SE

FIM_ALGORITMO
*/