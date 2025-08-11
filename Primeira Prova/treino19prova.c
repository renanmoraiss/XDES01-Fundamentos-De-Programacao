#include <stdio.h>

int main() {
	int opc;
	printf("1. Saque\n");
	printf("2. Extrato\n");
	printf("3. Transferencia\n");
	printf("4. Deposito\n");
	printf("Digite uma opcao: ");
	scanf("%d", &opc);
	
	if ((opc >= 1) && (opc <=4)) {
		if (opc == 1) {
			printf("Opcao saque selecionada\n");
		}
		if (opc == 2) {
			printf("Opcao extrato selecionada\n");
		}
		if (opc == 3) {
			printf("Opcao transferencia selecionda\n");
		}
		if (opc == 4) {
			printf("Opcao deposito selecionada\n");
		}
	}
	else {
		printf("Opcao invalida");
	}
	return 0;
}// update for commit
// update for commit
