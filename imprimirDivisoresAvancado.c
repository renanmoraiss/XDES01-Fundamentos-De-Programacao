#include <stdio.h>

int main() {
    while (1) {
    int valorInformadoPeloUsuario, teste;
    char continuarOuParar;
    printf("Digite um valor para saber seus divisores: ");
    scanf("%d", &valorInformadoPeloUsuario);

    if (valorInformadoPeloUsuario <= 0) {
        printf("%d e um valor invalido\n", valorInformadoPeloUsuario);
        continue;
    }

    for (teste = 1; teste <= valorInformadoPeloUsuario; teste += 1) {
        if (valorInformadoPeloUsuario % teste == 0) {
            printf("Divisor encontrado: %d\n", teste);
        }
    }

    printf("\n");
    printf("\n");

    printf("Deseja continuar a saber o(s) divisor(es) de outro numero?\n");
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