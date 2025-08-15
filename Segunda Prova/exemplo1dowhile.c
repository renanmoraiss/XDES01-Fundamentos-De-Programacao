#include <stdio.h>

int main() {
    int contador;
    contador = 1;
    //
    do {
        printf("%d\n", contador);
        contador++;
    } while (contador <= 10);
    //
    return 0;
}