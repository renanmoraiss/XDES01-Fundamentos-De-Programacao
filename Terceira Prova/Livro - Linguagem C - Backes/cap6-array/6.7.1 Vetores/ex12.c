#include <stdio.h>

int main() {
    int vet[10];
    //
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    //
    int contador = 0;
    int valorRepetido;
    for (int i = 0; i < 10; i++) {
        valorRepetido = 0;
        //
        for (int j = 0; j < i; j++) {
            if (vet[i] == vet[j]) {
                valorRepetido = 1;
                contador++;
            }
        }
        if (valorRepetido == 1) {
            printf("Repetido: %d\t", vet[i]);
            break;
        }
    } 
    printf("Numeros repetidos: %d\n", contador);
    //
    return 0;
}// update for commit
// update for commit
