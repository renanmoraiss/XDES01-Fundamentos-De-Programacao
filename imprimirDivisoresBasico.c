#include <stdio.h>

int main () {
    int valorInformadoPeloUsuario, teste;
    printf("Digite um valor inteiro para saber seus divisores: ");
    scanf("%d", &valorInformadoPeloUsuario);

    for (teste = 1; teste <= valorInformadoPeloUsuario; teste += 1) {
        if (valorInformadoPeloUsuario % teste == 0) {
            printf("Divisor encontrado: %d\n", teste);
        }
    }
    return 0;
}