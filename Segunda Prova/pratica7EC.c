#include <stdio.h>

int main() {
    int opc;

    printf("1. Saque\n");
    printf("2. Extrato\n");
    printf("3. Transferencia\n");
    printf("4. Deposito\n");
    printf("Digite uma opcao: ");
    scanf("%d", &opc);

    if ((opc < 1) || (opc > 4)) {
        printf("Opcao invalida");
    } else {
        if (opc == 1) {
            printf("Saque\n");
        } else if (opc == 2) {
            printf("Extrato\n");
        } else if (opc == 3) {
            printf("Transferencia\n");
        } else {
            printf("Deposito\n");
        }
    }

    return 0;
}// update for commit
// update for commit
