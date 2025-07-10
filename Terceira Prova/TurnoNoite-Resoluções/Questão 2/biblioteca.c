//Passou em todos os testes -> 4,0/4,0.

#include <stdio.h>
#include <string.h>

struct livro {
    char nomeLivro[50]; 
    char nomeAutor[40];
    int ano;
};

typedef struct livro livro;

int carregaLivros(livro vet[], char nomeArquivo[]);
int contarLivrosPorAutor(livro vet[], int tam, char autor[]);


int main() {
    int T;
    livro vet[30];
    char nomeAut[40];
    char nomeArq[30];
    int totalLivros;
    //
    scanf("%s", nomeArq);
    getchar();
    scanf("%s", nomeAut);
    //
    totalLivros = carregaLivros(vet, nomeArq);
    //
    T = contarLivrosPorAutor(vet, totalLivros, nomeAut);
    printf("%d", T);
    //
    return 0;
}

int carregaLivros(livro vet[], char nomeArquivo[]) {
    FILE *arq;
    arq = fopen(nomeArquivo, "r");
    if (arq == NULL) {
        return 1;
    }
    int i = 0;
    while (fscanf(arq, "%s %s %d", vet[i].nomeLivro, vet[i].nomeAutor, &vet[i].ano) == 3) {
        i++;
    }
    fclose(arq);
    return i;
}

int contarLivrosPorAutor(livro vet[], int tam, char autor[]) {
    int cont = 0;
    for (int i = 0; i < tam; i++) {
        if (strcmp(autor, vet[i].nomeAutor) == 0) {
            cont++;
        }
    }
    return cont;
}