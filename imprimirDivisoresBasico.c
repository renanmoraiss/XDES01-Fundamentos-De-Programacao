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

/*
ALGORITMO
DECLARE n, i INTEIRO
ESCREVA("Digite um valor inteiro: ")
LEIA (n)

PARA (i = 1; i <= n; i += 1)
SE (n % i = 0)
ESCREVA("Divisor encontrado: (i)")
FIM_SE
FIM_PARA

FIM_ALGORITMO
*/// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
