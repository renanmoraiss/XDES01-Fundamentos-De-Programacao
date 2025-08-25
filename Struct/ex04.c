#include <stdio.h>
#include <string.h>

struct estoque {
    int id;
    int quantidade;
    float valor;
};

int main() {
    //DECLARAÇÃO DA VARIÁVEL
    struct estoque prodEstoque;
    int qtd;

    //ATRIBUIÇÃO DE VALORES
    scanf("%d", &prodEstoque.id);
    scanf("%d", &prodEstoque.quantidade);
    scanf("%f", &prodEstoque.valor);

    qtd = prodEstoque.quantidade;

    //IMPRIMIR OS DADOS DO PRODUTO
    printf("%d %d %0.2f\n", prodEstoque.id, prodEstoque.quantidade, prodEstoque.valor);
    printf("%d\n", qtd);

    return 0;
}