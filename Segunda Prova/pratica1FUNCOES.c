#include <stdio.h>

int retornaMaior(int n1, int n2); //passagem de parametro por valor (copia)

int main() {
    int valor1, valor2, maior;
    //
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    //
    maior = retornaMaior(valor1, valor2);
    printf("Maior: %d\n", maior);
    //
    return 0;
}

int retornaMaior(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}