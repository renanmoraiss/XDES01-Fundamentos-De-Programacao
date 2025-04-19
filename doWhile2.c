#include <stdio.h>

int main() {
    int contador, n1;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    contador = 1;
    do {
        printf("%d\n", contador);
        contador +=1;
    } while (contador <= n1);

    return 0;
}