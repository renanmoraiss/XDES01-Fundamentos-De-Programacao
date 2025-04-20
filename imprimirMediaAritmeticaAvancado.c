#include <stdio.h>

int main() {
    while (1) {
    int quantidadeDeValoresAcalcular, i;
    float valorDigitadoPeloUsuario, soma = 0.0, media;
    char continuarOuParar;

    printf("Digite a quantidade de numeros para calcular a media: ");
    scanf("%d", &quantidadeDeValoresAcalcular);

    if (quantidadeDeValoresAcalcular <= 0) {
        printf("%d nao e uma quantidade valida\n", quantidadeDeValoresAcalcular);
        return 1;
    }

    for (i = 1; i <= quantidadeDeValoresAcalcular; i += 1) {
        printf("Digite um valor: ");
        scanf("%f", &valorDigitadoPeloUsuario);
        soma += valorDigitadoPeloUsuario;
    } printf("SOMA: %0.2f\n", soma);
    

    media = soma / quantidadeDeValoresAcalcular;
    printf("MEDIA: %0.2f\n", media);

printf("\n");
printf("\n");

    printf("Deseja continuar a calcular outras medias?\n");
    printf("A. CONTINUAR\n");
    printf("B. PARAR\n");
    printf("Digite o caractere da respectiva acao: ");
    scanf(" %c", &continuarOuParar);

    if ((continuarOuParar == 'B') || (continuarOuParar == 'b')) {
        printf("Programa encerrado.\n");
        return 0;
    }
    else if ((continuarOuParar == 'A') || (continuarOuParar == 'a')) {
        printf("Prosseguindo.\n");
        continue;
    } else {
        printf("Caractere invalido - programa encerrado.\n");
        return 1;
    }
    }

    return 0;
}