#include <stdio.h>
#include <string.h>

#define TAM 30

struct palavras {
    char palavra[TAM];
};

typedef struct palavras dados;

void verificarPalavras(dados vet[], int tam, char palavra[]);

int main() {
    char nomeArquivo[TAM];
    char palavraInformada[TAM];
    dados vet[50];
    FILE *arq;
    //
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    //
    printf("Digite a palavra para buscar: ");
    scanf("%s", palavraInformada);
    //
    arq = fopen(nomeArquivo, "r");
    if (arq == NULL) {
        return 1;
    }
    int i = 0;
    while (!feof(arq)) {
        fscanf(arq, "%s", vet[i].palavra);
        i++;
    }
    fclose(arq);
    verificarPalavras(vet, i, palavraInformada);
    return 0;
}

void verificarPalavras(dados vet[], int tam, char palavra[]) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (strcmp(vet[i].palavra, palavra) == 0) {
            contador++;
        }
    }
    printf("%s repetiu %d vezes\n", palavra, contador);
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
