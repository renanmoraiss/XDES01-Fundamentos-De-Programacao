#include <stdio.h>

int main() {
    float n1, n2; 

    printf("Digite um numero: ");
    scanf("%f", &n1);

    printf("Digite um segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O menor numero e: %0.2f", n2);
    }
    if(n2 > n1) {
        printf("O menor numero e: %0.2f", n1);
    }
    if(n1 == n2) {
        printf("Os numeros devem ser diferentes!");
        return 1;
    }

    return 0;
}