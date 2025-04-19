#include <stdio.h>
#include <math.h>

int main() {
	char sexo;
	float peso, altura, pesoIdeal, IMC, novoPesoIdeal, novoIMC;
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	printf("Selecione seu Genero:\n");
	printf("M. Masculino\n");
	printf("F. Feminino\n");
	printf("Digite o caractere do seu respectivo genero: ");
	scanf(" %c", &sexo);
	
	switch(sexo) {
		case 'M':
		case 'm':
			pesoIdeal = (72.7 * altura) - 58;
			printf("Peso ideal: %0.2f\n", pesoIdeal);
			break;
		
		case 'F':
		case 'f':
			pesoIdeal = (62.1 * altura) - 44.7;
			printf("Peso ideal: %0.2f\n", pesoIdeal);
			break;
			
		default:
			printf("Caractere digitado invalido");
			return 1;
	}
	
	IMC = peso / pow(altura,2);
	printf("IMC: %0.2f\n", IMC);
	
	if (IMC < 18.5) {
		printf("Condicao do IMC: Abaixo do peso\n");
	} else {
		if ((IMC >= 18.5) && (IMC < 25)) {
			printf("Condicao do IMC: Peso normal\n");
		} else if ((IMC >= 25) && (IMC < 30)) {
			printf("Condicao do IMC: Acima do peso\n");
		} else {
			printf("Condicao do IMC: Obeso\n");
		}
	}
	
	if (IMC >=25) {
		novoPesoIdeal = fabs(peso - pesoIdeal); //fabs para sempre mostrar um numero positivo (serve para float e double)
		printf("Voce precisa perder %0.2f kg para alcancar o peso ideal\n", novoPesoIdeal);
		novoIMC = pesoIdeal / pow(altura,2);
		printf("Seu novo IMC nesse peso seria %0.2f", novoIMC);	
	}
	
	return 0;
}