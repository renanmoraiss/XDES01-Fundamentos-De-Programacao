#include <stdio.h>
#include <string.h>

struct Atleta {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

typedef struct Atleta atleta;

int main() {
    atleta vet[5];
    //
    for (int i = 0; i < 5; i++) {
        scanf("%s", vet[i].nome);
        //
        scanf("%s", vet[i].esporte);
        //
        scanf("%d", &vet[i].idade);
        //
        scanf("%f", &vet[i].altura);
    }
    //
    int maisVelho = vet[0].idade;
    char nomeMaisVelho[50];
    for (int i = 0; i < 5; i++) {
        if (vet[i].idade > maisVelho) {
            maisVelho = vet[i].idade;
            strcpy(nomeMaisVelho, vet[i].nome);
        }
    }
    //
    float maisAlto = vet[0].altura;
    char nomeMaisAlto[50];
    for (int i = 0; i < 5; i++) {
        if (vet[i].altura > maisAlto) {
            maisAlto = vet[i].altura;
            strcpy(nomeMaisAlto, vet[i].nome);
        }
    }
    //
    printf("ATLETA MAIS ALTO: \n");
    printf("NOME: %s, ALTURA: %0.2f\n", nomeMaisAlto, maisAlto);
    //
    printf("ATLETA MAIS VELHO: \n");
    printf("NOME: %s, IDADE: %d\n", nomeMaisVelho, maisVelho);
    //
    return 0;
}// update for commit
// update for commit
