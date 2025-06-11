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
    prodEstoque.id = 1; // nomeStruct.nomeAtributo
    prodEstoque.quantidade = 30; // nomeStruct.nomeAtributo
    prodEstoque.valor = 45.69; // nomeStruct.nomeAtributo
    
    //IMPRIMIR OS DADOS DO PRODUTO
    printf("%d %d %0.2f", prodEstoque.id, prodEstoque.quantidade, prodEstoque.valor);
    
    return 0;
}
