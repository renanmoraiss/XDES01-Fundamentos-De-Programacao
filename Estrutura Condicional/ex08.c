#include <stdio.h>

int main() {
    int opcao;

    //Mostrar o menu na tela
    printf("1. Saque \n");
    printf("2. Extrato \n");
    printf("3. Transferencia \n");
    printf("4. Deposito \n");
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    //Realizar a ação selecionada pelo usuário

    if ((opcao == 1) || (opcao == 2) || (opcao == 3) || (opcao == 4)) {
        if (opcao == 1) {
            printf("Opcao saque selecionada");
        }
        if (opcao == 2) {
            printf("Opcao extrato selecionada");
        }
        if (opcao == 3) {
            printf("Opcao transferencia selecionada");
        }
        if (opcao == 4) {
            printf("Opcao deposito selecionada");
        }
    }
    if ((opcao != 1) && (opcao != 2) && (opcao != 3) && (opcao != 4)) {
        printf("Opcao invalida");
    }

    /*Como ficaria usando switch-case
    switch (opcao) {
    case 1:
    printf("Opcao saque selecionada");
    break;
    ...
    default: -> para aparecer algo caso nao tenha sido digitada nenhuma opcao acima
    printf("Opcao invalida");
    }
    */

    return 0;
}