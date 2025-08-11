#include <stdio.h>

void retornaMaior(float n1, float n2, float *maior);

int main() {
    float num1, num2;
    float maior;
    //
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    //
    printf("Digite o segundoo valor: ");
    scanf("%f", &num2);
    //
    retornaMaior(num1, num2, &maior);
    //
    printf("Maior: %0.2f\n", maior);
    //
    return 0;
}

void retornaMaior(float n1, float n2, float *maior) {
    if (n1 > n2) {
        *maior = n1;
    } else {
        *maior = n2;
    }
}// update for commit
// update for commit
