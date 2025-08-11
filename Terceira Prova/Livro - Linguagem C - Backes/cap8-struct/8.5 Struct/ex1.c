#include <stdio.h>
#include <string.h>

struct Cadastro {
    char nome[50];
    int idade;
    char endereco[50];
};

typedef struct Cadastro dados;

int main() {
    dados vet[1];
    for (int i = 0; i < 1; i++) {
    printf("Nome: ");
    scanf("%[^\n]", vet[i].nome);
    //
    printf("Idade: ");
    scanf("%d", &vet[i].idade);
    //
    getchar();
    printf("Endereco: ");
    scanf("%[^\n]", vet[i].endereco);
    }
    //
    for (int i = 0; i < 1; i++) {
        printf("%s, %d, %s", vet[i].nome, vet[i].idade, vet[i].endereco);
    }
    //
    return 0;
}// update for commit
// update for commit
