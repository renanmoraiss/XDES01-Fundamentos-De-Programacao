#include <stdio.h>
#include <string.h>

struct estoque {
    char nomeProduto[30];
    int quantidade;
    float valor;
};

//STRUCT COM STRING
int main() {
    //INICIALIZAÇÃO DIRETA
    struct estoque prodEstoque = {"Mesa", 30, 65.8};
    printf("%s %d %0.2f\n", prodEstoque.nomeProduto, prodEstoque.quantidade, prodEstoque.valor);

    //LEITURA VIA SCANF
    scanf("%s", prodEstoque.nomeProduto);
    printf("%s %d %0.2f\n", prodEstoque.nomeProduto, prodEstoque.quantidade, prodEstoque.valor);

    //ATRIBUIÇÃO
    strcpy(prodEstoque.nomeProduto, "Mesa"); //strcpy(destino, origem);

    //IMPRIMIR OS DADOS DO PRODUTO
    printf("%s %d %0.2f\n", prodEstoque.nomeProduto, prodEstoque.quantidade, prodEstoque.valor);

    return 0;
}