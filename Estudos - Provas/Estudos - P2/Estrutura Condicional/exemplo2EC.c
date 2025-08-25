#include <stdio.h>

int main() {
    int opc;
    //
    printf("1. Saque\n");
    printf("2. Extrato\n");
    printf("3. Transferencia\n");
    printf("4. Deposito\n");
    printf("Digite uma opcao: ");
    scanf("%d", &opc);
    //
    switch (opc) {
        case 1:
        printf("Opcao saque\n");
        break;

        case 2:
        printf("Opcao extrato selecionada\n");
        break;

        case 3:
        printf("Opcao transferencia selecionada\n");
        break;

        case 4:
        printf("Opcao deposito selecionada\n");
        break;

        default:
        printf("Opcao invalida\n");
    }
    return 0;
}