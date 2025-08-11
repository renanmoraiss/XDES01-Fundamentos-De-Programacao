#include <stdio.h>

int main() {
    int numeroDigitadoPeloUsuario, teste;
    float numero, somaDosNumeros = 0.0, media;

    printf("Digite a quantidade de numeros para calcular a media: ");
    scanf("%d", &numeroDigitadoPeloUsuario);

    if (numeroDigitadoPeloUsuario <= 0) {
        printf("%d e uma quantidade invalida\n", numeroDigitadoPeloUsuario);
        return 1;
    }

    for (teste = 1; teste <= numeroDigitadoPeloUsuario; teste += 1) {
        printf("Digite um valor: ");
        scanf("%f", &numero);
        somaDosNumeros += numero;
        } printf("SOMA = %0.2f\n", somaDosNumeros);

    media = somaDosNumeros / numeroDigitadoPeloUsuario;
    printf("MEDIA = %0.2f\n", media);

        return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
