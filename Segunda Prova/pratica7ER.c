#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;
    //
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    //
    if (numero >= 0) {
        if (numero > 0) {
            for (int i = numero; i >= 1; i--) {
            fatorial *= i;
        } printf("%d! = %d\n", numero, fatorial);
        } else {
            printf("%d! = 1\n", numero);
        }
    } 
    else {
        printf("Numero invalido\n");
    }
    return 0;
}// update for commit
// update for commit
