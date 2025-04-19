#include <stdio.h>

int main() {
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade >=5) {
	   if (idade <= 7) {
	   	printf("Infantil A");
	   } else if (idade <= 10) {
	   	printf("Infantil B");
	   } else if (idade <= 13) {
	   	printf("Juvenil A");
	   } else if (idade <= 17) {
	   	printf("Juvenil B");
	   } else {
	   	printf("Senior");
	   } 	
	} else {
	   	printf("Idade Invalida");
	   }
	return 0;
}