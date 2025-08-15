#include <stdio.h>

int main() {
    int idade;
    float peso;
    float altura;
    int jogadoresComIdadeInferiorA18 = 0;
    int somaIdades = 0;
    float mediaIdades;
    float maiorAltura = 0.0;
    float menorAltura = 5.0;
    float somaAlturas = 0.0;
    float mediaAlturas = 0.0;
    int jogadoresComMaisDe80kg = 0;
    float porcentagemDeJogadoresComMaisDe80kg;

    for (int i = 1; i <= 5; i++) {
        printf("Idade: ");
        scanf("%d", &idade);
        somaIdades += idade;
        if (idade < 18) {
            jogadoresComIdadeInferiorA18++;
        }
        //

        printf("Peso: ");
        scanf("%f", &peso);
        if (peso > 80) {
            jogadoresComMaisDe80kg++;
        }

        //

        printf("Altura: ");
        scanf("%f", &altura);
        somaAlturas += altura;
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }
    } mediaIdades = (float)somaIdades / 5;
    mediaAlturas = somaAlturas / 5;
    porcentagemDeJogadoresComMaisDe80kg = ((float)jogadoresComMaisDe80kg / 5)  * 100;
    printf("Quantidade de jogadores com idade inferior a 18: %d\n", jogadoresComIdadeInferiorA18);
    printf("Media das idades: %0.2f\n", mediaIdades);
    printf("Maior altura: %0.2f\n", maiorAltura);
    printf("Menor altura: %0.2f\n", menorAltura);
    printf("Media das alturas: %0.2f\n", mediaAlturas);
    printf("Porcentagem de jogadores com mais de 80 kg: %0.2f\n", porcentagemDeJogadoresComMaisDe80kg);

    return 0;
}