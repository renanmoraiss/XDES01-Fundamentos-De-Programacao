#include <stdio.h>
#include <math.h>

struct Pessoa {
    char nome[50];
    int ano;
};

typedef struct Pessoa pessoa;

int main() {
    pessoa vet[6];
    int anoAtual = 2025;
    //
    for (int i = 0; i < 5; i++) {
        scanf("%s", vet[i].nome);
        scanf("%d", &vet[i].ano);
    }
    //
    for (int i = 0; i < 5; i++) {
        vet[i].ano = anoAtual - vet[i].ano;
    } for (int i = 0; i < 5; i++) {
        printf("%d\t", vet[i].ano);
    } printf("\n");
    //
    int idadeMaisVelho = vet[0].ano;
    int idadeMaisNovo = vet[0].ano;
    int indiceN = 0;
    int indiceV = 0;
    for (int i = 0; i < 5; i++) {
        if (vet[i].ano > idadeMaisVelho) {
            idadeMaisVelho = vet[i].ano;
            indiceV = i;
        } if (vet[i].ano < idadeMaisNovo) {
            idadeMaisNovo = vet[i].ano;
            indiceN = i;
        }
    }
    //
    printf("Nome da pessoa mais nova: %s\n", vet[indiceN].nome);
    printf("Nome da pessoa mais velha: %s\n", vet[indiceV].nome);
    //
    return 0;
}