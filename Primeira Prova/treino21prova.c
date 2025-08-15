#include <stdio.h>

int main() {
	float altura, peso;
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	if ((altura < 1.20 ) && (peso < 60)) {
		printf("Classificacao A\n");
	}
	else if ((altura >= 1.20 ) && (altura <= 1.70) && (peso < 60)) {
		printf("Classificacao B\n");
	}
	else if ((altura > 1.70) && (peso < 60)) {
		printf("Classificacao C\n");
	}
	else if ((altura < 1.20 ) && (peso >= 60) && (peso <= 90)) {
		printf("Classificacao D\n");
	}
	else if ((altura >= 1.20 ) && (altura <= 1.70) && (peso >= 60) && (peso <= 90)) {
		printf("Classificacao E\n");
	}
	else if ((altura > 1.70 ) && (peso >= 60) && (peso <= 90)) {
		printf("Classificacao F\n");
	}
	else if ((altura < 1.20 ) && (peso > 90)) {
		printf("Classificacao G\n");
	}
	else if ((altura >= 1.20 ) && (altura <= 1.70) && (peso > 90)) {
		printf("Classificacao H\n");
	}
	else if ((altura > 1.70) && (peso > 90)) {
		printf("Classificacao I");
	}

	
	return 0;
}