#include <stdio.h>

int main() {
    int opc;
    scanf("%d", &opc);

    switch(opc) {
        case 1:
        printf("Hambúrguer - R$ 12,00");
        break;
        case 2:
        printf("Cheeseburguer - R$ 15,00");
        break;
        case 3:
        printf("Refrigerante - R$ 6,00");
        break;
        case 4:
        printf("Suco natural - R$ 8,00");
        break;
        case 5:
        printf("Encerrar pedido");
        break;
        default:
        printf("Opção inválida");
        break;
    }
    return 0;
}