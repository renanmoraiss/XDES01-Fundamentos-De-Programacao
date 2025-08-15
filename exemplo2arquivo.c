#include <stdio.h>
#include <string.h>


#define TAM 30

struct Alunos {
    char nome[20];
    int idade;
    char curso[20];
};
typedef struct Alunos dados;

void imprimeAluno(dados vet[], int tamanho, char nomeArquivo[]);

int main() {
    dados vet[50];
    char nomeArquivo[TAM];
    char nomeArqSaida[TAM] = "cadAtt.txt";
    //
    scanf("%s", nomeArquivo);
    //
    FILE *arqEntrada;
    arqEntrada = fopen(nomeArquivo, "r");
    if (arqEntrada == NULL) {
        return 1;
    }
    int i = 0;
    while (fscanf(arqEntrada, "%[^,],%d,%[^,]\n", vet[i].nome, &vet[i].idade, vet[i].curso) == 3) {
        i++;
    }
    imprimeAluno(vet, i, nomeArqSaida);
    fclose(arqEntrada);
    return 0;
}

void imprimeAluno(dados vet[], int tamanho, char nomeArquivo[]) {
    FILE *arqSaida;
    arqSaida = fopen(nomeArquivo, "w");
    if (arqSaida == NULL) {
        return;
    }
    for (int i = 0; i < tamanho; i++) {
        fprintf(arqSaida, "%s %d %s", vet[i].nome, vet[i].idade+1, vet[i].curso);
    }
    fclose (arqSaida);
}