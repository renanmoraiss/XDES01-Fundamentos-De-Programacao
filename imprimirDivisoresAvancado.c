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

    printf("DESEJA CONTINUAR PARA SABER OS DIVISORES DE OUTRO NUMERO?\n");
    printf("A. CONTINUAR\n");
    printf("B. ENCERRAR\n");
    printf("CARACTERE DA ALTERNATIVA ESCOLHIDA: ");
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
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
