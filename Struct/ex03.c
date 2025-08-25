#include <stdio.h>
#include <string.h>

//DECLARAÇÃO DA STRUCT
struct estoque {
    int id;
    int quantidade;
    float valor;
};

int main() {
    //DECLARAÇÃO DA VARIÁVEL
    struct estoque prodEstoque;
    
    //ATRIBUIÇÃO DE VALORES
    scanf("%d", &prodEstoque.id);  // nomeStruct.nomeAtributo
    scanf("%d", &prodEstoque.quantidade);
    scanf("%f", &prodEstoque.valor);

    //IMPRIMIR OS DADOS DO PRODUTO
    printf("%d %d %0.2f", prodEstoque.id, prodEstoque.quantidade, prodEstoque.valor);

    return 0;
}