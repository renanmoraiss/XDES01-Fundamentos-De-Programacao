#include <stdio.h>

float calculaMedia(int n1, int n2); // protótipo da função é declarado antes da main
                                    /*protótipo omite a sequencia de comandos, mas nos permite saber o
                                    tipo de saída da função, o nome da função e os parametros de entrada.*/

int main() {
    int valor1, valor2;
    float media;
    //
    printf("Digite a nota 1: ");
    scanf("%d", &valor1);
    //
    printf("Digite a nota 2: ");
    scanf("%d", &valor2);
    //
    media = calculaMedia(valor1, valor2);
    printf("Media: %0.2f\n", media);
    //
    return 0;
}

float calculaMedia(int n1, int n2) {
    float media;
    media = (n1 + n2) / 2;
    return media; //valor calculado é retornado e copiado para a variável media
}