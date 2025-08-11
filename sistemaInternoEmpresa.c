#include <stdio.h>

int main() {
    int codigoDeAcesso;
    printf("Digite seu codigo de acesso (numero inteiro): ");
    scanf("%d", &codigoDeAcesso);

    if(codigoDeAcesso == 1) {
        printf("Acesso permitido (Administrador)");
    }
    if(codigoDeAcesso == 2) {
        printf("Acesso permitido (Cracha Ativo)");
    }
    if((codigoDeAcesso != 1) && (codigoDeAcesso != 2)) {
        printf("Acesso negado");
    }

    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
