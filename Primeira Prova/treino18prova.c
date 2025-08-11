#include <stdio.h>

int main() {
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 16) {
		printf("Nao pode votar");
	}
	
	else {
		if (idade < 18) {
			printf("Facultativo");
		} else {
			printf("Deve votar");
		}
	}
	return 0;
}// update for commit
// update for commit
