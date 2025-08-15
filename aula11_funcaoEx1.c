/*#include <stdio.h>

int retornaMaior(int n1, int n2);

int main() {
    int numero1, numero2, maiorNumero;
    //
    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);
    //
    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);
    //
    maiorNumero = retornaMaior(numero1, numero2);
    //
    printf("Maior valor: %d\n", maiorNumero);
    //
    return 0;
}

int retornaMaior(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
} */
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

float retornaMaior(float n1, float n2);

int main() {
    float numero1, numero2, maiorNumero;
    //
    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    //
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);
    //
    maiorNumero = retornaMaior(numero1, numero2);
    //
    printf("Maior valor: %0.2f\n", maiorNumero);
    //
    return 0;
}

float retornaMaior(float n1, float n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}