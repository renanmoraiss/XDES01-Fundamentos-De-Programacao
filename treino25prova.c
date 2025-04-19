#include <stdio.h> 

int main() {
	char opcao;
	printf("Cardapio:\n");
	printf("1 - Hamburguer - R$ 12,00\n");
	printf("2 - Cheeseburguer - R$ 15,00\n");
	printf("3 - Refrigerante - R$ 6,00\n");
	printf("4 - Suco natural - R$ 8,00\n");
	printf("5 - Encerrar pedido\n");
	printf("Digite o numero da opcao desejada: ");
	scanf(" %c", &opcao);
	
	switch(opcao) {
		case '1':
			printf("Hamburguer - R$ 12,00\n");
			break;
		case '2':
			printf("Cheeseburguer - R$ 15,00\n");
			break;
		case '3':
			printf("Refrigerante - R$ 6,00\n");
			break;
		case '4':
			printf("Suco natural - R$ 8,00\n");
			break;
		case '5':
			printf("Pedido encerrado.\n");
			break;
		default:
			printf("Opcao invalida\n");
			break;
	}
	return 0;
}