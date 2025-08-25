#include <stdio.h>

void retornaMaior(float n1, float n2, float *maior);

int main() {
    float nmr1, nmr2;
    float maior;
    //
    printf("Digite um valor: ");
    scanf("%f", &nmr1);
    //
    printf("Digite um valor: ");
    scanf("%f", &nmr2);
    //
    retornaMaior(nmr1, nmr2, &maior);
    //
    printf("Maior valor: %0.2f\n", maior);
    //
    return 0;
}

void retornaMaior(float n1, float n2, float *maior) {
    if (n1 > n2) {
        *maior = n1;
    } else {
        *maior = n2;
    }
}