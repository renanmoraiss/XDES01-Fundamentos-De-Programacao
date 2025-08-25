#include <stdio.h>

void preencheVetor(int vetor[], int tam);

int main() {
    int vet[10];
    int tam = 10;
    //
    preencheVetor(vet, tam);
    //
    return 0;
}

void preencheVetor(int vetor[], int tam) {
    int valorRepetido;
    for (int i = 0; i < tam; i++) {
        do {
        valorRepetido = 0;
        scanf("%d", &vetor[i]);
        //
        for (int j = 0; j < i && valorRepetido == 0; j++) {
            if (vetor[j] == vetor[i]) {
                printf("Valor repetido.\n");
            valorRepetido = 1;
            }
        }
    } while (valorRepetido == 1);
}
    //
    for (int k = 0; k < tam; k++) {
        printf("%d\t", vetor[k]);
    }
}