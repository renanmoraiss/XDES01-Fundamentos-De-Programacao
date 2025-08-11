#include <stdio.h>

int main() {
    int opcao;
    printf("1. Hambúrguer - R$ 12,00\n");
    printf("2. Cheeseburguer - R$ 15,00\n");
    printf("3. Refrigerante - R$ 6,00\n");
    printf("4. Suco natural - R$ 8,00\n");
    printf("5. Encerrar pedido\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case '1':
        printf("Hambúrguer - R$ 12,00");
        break;
        case '2':
        printf("Cheeseburguer - R$ 15,00");
        break;
        case '3':
        printf("Refrigerante - R$ 6,00");
        break;
        case '4':
        printf("Suco natural - R$ 8,00");
        break;
        case '5':
        printf("Encerrar pedido");
        break;
        default:
        break;
    }
    return 0;
}// update for commit
// update for commit
