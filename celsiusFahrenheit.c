#include <stdio.h>

int main () {
    int celsius, fahrenheit;
    printf("Digite uma temperatura em celsius: ");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("Temperatura em Fahrenheit: %d", fahrenheit);
    return 0;
}