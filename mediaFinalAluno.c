#include <stdio.h>

int main() {
    float n1, n2, mediaFinal;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);

    mediaFinal = (n1 + n2) / 2;
    if ((mediaFinal >= 0) && (mediaFinal < 3)) {
        printf("Reprovado", mediaFinal);
    }
    
    if ((mediaFinal >= 3.0) && (mediaFinal < 6)) {
        printf("Prova de Recuperacao", mediaFinal);
    }

    if ((mediaFinal >= 6.0) && (mediaFinal < 10)) {
        printf("Aprovado", mediaFinal);
    }

    return 0;
}