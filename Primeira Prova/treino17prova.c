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