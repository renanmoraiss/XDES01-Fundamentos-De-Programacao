#include <stdio.h>

void preencheVetor(int vet[], int tam);
void encontraIguais(int vet[], int tam);
void imprimeVetor(int vet[], int tam);

int main() {
    int tam = 10;
    int vet[tam];
    
    preencheVetor(vet, tam);
    encontraIguais(vet, tam);
    
    return 0;
}

void preencheVetor(int vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
}

void encontraIguais(int vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        int valorRepetido = 0;

        for (int r = 0; r < i; r++) {
            if (vet[r] == vet[i]) {
                valorRepetido = 1;
                break;
            }
        }

        for (int v = i + 1; v < tam; v++) {
            if (vet[v] == vet[i]) {
                if (valorRepetido == 0) {
                    printf("Valor repetido: %d\n", vet[i]);
                    break;
                }
            }
        }
    }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
