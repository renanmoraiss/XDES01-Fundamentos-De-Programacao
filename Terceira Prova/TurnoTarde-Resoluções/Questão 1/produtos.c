#include <stdio.h>
#include <string.h>

struct Produto {
    char nome_produto[30];
    int codigo;
    float preco;
};

typedef struct Produto Produto;

int carregarProdutos(Produto vetor[], char nomeArquivo[]);
int buscarPorNome(Produto vetor[], int tam, char nomeProduto[]);

int main() {
    Produto vet[100];
    char nomeArquivo[30] = "produtos.txt";
    char nomeProduto[30];
    int tamanho;
    int res;
    ////
    tamanho = carregarProdutos(vet, nomeArquivo);
    ////
    scanf("%s", nomeProduto);
    res = buscarPorNome(vet, tamanho, nomeProduto);
    if (res == -1) {
        printf("Produto não encontrado");
    } else {
        printf("Produto encontrado:\n");
        printf("Nome: %s\n", vet[res].nome_produto);
        printf("Codigo: %d\n", vet[res].codigo);
        printf("Valor: %0.2f\n", vet[res].preco);
    }
}

int carregarProdutos(Produto vetor[], char nomeArquivo[]) {
    FILE *arq;
    arq = fopen(nomeArquivo, "r");
    if (arq == NULL) {
        return 1;
    }
    int i = 0;
    while(fscanf(arq, "%s %d %f", vetor[i].nome_produto, &vetor[i].codigo, &vetor[i].preco) == 3) {
        i++;
    }
    fclose(arq);
    return i;
}

int buscarPorNome(Produto vetor[], int tam, char nomeProduto[]) {
    int indiceDoProdutoEncontrado = 0;
    int produtoEncontrado = 0;
    for (int i = 0; i < tam && produtoEncontrado != 1; i++) {
        if (strcmp(nomeProduto, vetor[i].nome_produto) == 0) {
            indiceDoProdutoEncontrado = i;
            produtoEncontrado = 1;
        }
    }
    if (produtoEncontrado == 0) {
        return -1;
    } else {
        return indiceDoProdutoEncontrado;
    }
}