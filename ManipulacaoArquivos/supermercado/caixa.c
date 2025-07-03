#include <stdio.h>
#include <string.h>

struct ListaDeCompras {
    char nome[30];
    int quantidade;
    float preco;
};

typedef struct ListaDeCompras compras;

int totalDados(compras vet[], char nomeArquivo[]);
void calculaValorFinal(compras vet[], int tam);

int main() {
    compras vet[50];
    char nomeArquivo[30];
    int tam;
    //
    scanf("%s", nomeArquivo);
    //
    tam = totalDados(vet, nomeArquivo);
    printf("Tamanho: %d\n", tam);
    //
    calculaValorFinal(vet, tam);
    //
    return 0;
}

int totalDados(compras vet[], char nomeArquivo[]) {
    FILE *arq;
    arq = fopen(nomeArquivo, "r");
    if (arq == NULL) {
        return 1;
    }
    int i = 0;
    while(fscanf(arq, "%s %d %f", vet[i].nome, &vet[i].quantidade, &vet[i].preco) == 3) {
        i++;
    }
    fclose(arq);
    return i;
}

struct Produtos {
    char nomeProduto[30];
    float somaDosValores;
};

typedef struct Produtos produtos;

void calculaValorFinal(compras vet[], int tam) {
    produtos vetorPdr[50];
    int totalProdutosDiferentes = 0;
    int produtoNovoEncontrado;
    float somaTotal = 0.0;
    for (int i = 0; i < tam; i++) {
        //
        produtoNovoEncontrado = 0;
        //
        for (int j = 0; j < totalProdutosDiferentes; j++) {
            if (strcmp(vetorPdr[i].nomeProduto, vet[i].nome) == 0) {
                vetorPdr[i].somaDosValores += (float)vet[i].quantidade * vet[i].preco;
                produtoNovoEncontrado = 1;
            }
        }
        //
        if (produtoNovoEncontrado == 0) {
            strcpy(vetorPdr[i].nomeProduto, vet[i].nome);
            vetorPdr[i].somaDosValores = vet[i].quantidade * vet[i].preco;
            totalProdutosDiferentes++;
        }
    }
    //
    for (int i = 0; i < totalProdutosDiferentes; i++) {
        somaTotal += vetorPdr[i].somaDosValores;
    }
    //
    printf("Valor final: %0.2f\n", somaTotal);
}