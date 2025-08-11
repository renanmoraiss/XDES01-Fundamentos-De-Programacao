#include <stdio.h>

int main() {
	int opc;
	float valor, valorFinal;
	printf("Insira o valor do produto: ");
	scanf("%f", &valor);
	printf("1. Minas Gerais\n");
	printf("2. Sao Paulo\n");
	printf("3. Rio de Janeiro\n");
	printf("4. Mato Grosso do Sul\n");
	printf("Escolha o numero do estado de destino do produto: ");
	scanf("%d", &opc);
	
	switch(opc) {
		case 1:
			valorFinal = valor + (valor * 0.07);
			printf("Valor para MG: %0.2f", valorFinal);
			break;
		case 2:
			valorFinal = valor + (valor * 0.12);
			printf("Valor para SP: %0.2f", valorFinal);
			break;
		case 3:
			valorFinal = valor + (valor * 0.15);
			printf("Valor para RJ: %0.2f", valorFinal);
			break;
		case 4:
			valorFinal = valor + (valor * 0.08);
			printf("Valor para MS: %0.2f", valorFinal);
			break;
		default:
			printf("Opcao invalida");
			break;
	}
	return 0;
}// update for commit
// update for commit
