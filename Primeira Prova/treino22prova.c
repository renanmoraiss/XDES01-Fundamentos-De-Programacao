#include <stdio.h>
#include <math.h>

int main() {
	float number;
	printf("Digite um valor: ");
	scanf("%f", &number);
	if (number >= 0) {
		printf("%0.2f", sqrt(number));
	} else {
	printf("%0.2f", pow(number, 2));	
	}
	return 0;
}