#include <stdio.h>

int main() {
    int codigoDeAcesso;
    printf("Digite o codigo de acesso: ");
    scanf("%d", &codigoDeAcesso);
    if ((codigoDeAcesso == 1) || (codigoDeAcesso == 2)) {
        printf("Acesso permitido");
    } 
    if ((codigoDeAcesso != 1) && (codigoDeAcesso != 2)) {
        printf("Acesso negado");
    }
    return 0;
}

/*
ALGORITMO

DECLARE codigoDeAcesso INTEIRO
ESCREVA("Digite o codigo de acesso: ")
LEIA (codigoDeAcesso)

SE ((codigoDeAcesso = 1) OU (codigoDeAcesso = 2)) ENTÃO
ESCREVA("Acesso permitido")
FIM_SE

SE ((codigoDeAcesso ≠ 1) E (codigoDeAcesso ≠ 2)) ENTÃO
ESCREVA("Acesso negado")
FIM_SE

FIM_ALGORITMO
*/// update for commit
// update for commit
