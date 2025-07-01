#include <stdio.h>
#include <string.h>

struct Artista {
    char nome_do_artista[31];
    char genero[11];
    float total_producoes;
    float ouvintes_unicos;
};

typedef struct Artista artista; 

int carregaDados(artista vet[], char nomeArquivo[]);
void imprimeArtistas(artista vet[], int tam);
artista * artistaMaisOuvido(artista vet[], int tam);
void generoMaisOuvido(artista vet[], int tam);
/*
int artistaMaisOuvido(...);
*/

int main() {
    artista dados[100];
    char nomeArquivo[30];
    int registros;
    /*
    int indiceDoArtistaComMaiorNmrDeReproducoes;
    */
    artista *artistaComMaiorNmrDeReproducoes;
    scanf("%s", nomeArquivo);
    registros = carregaDados(dados, nomeArquivo);
    imprimeArtistas(dados, registros);
    artistaComMaiorNmrDeReproducoes = artistaMaisOuvido(dados, registros);
    printf("\n%s\t%s\t%0.2f\t%0.2f\n", artistaComMaiorNmrDeReproducoes->nome_do_artista, artistaComMaiorNmrDeReproducoes->genero, artistaComMaiorNmrDeReproducoes->total_producoes, artistaComMaiorNmrDeReproducoes->ouvintes_unicos);
    /*
    printf("\n%s\t%s\t%0.2f\t%0.2f\n", dados[indiceDo...].nome_artista, ...);
    */
    generoMaisOuvido(dados, registros);
    return 0;
}

int carregaDados(artista vet[], char nomeArquivo[]) {
    FILE *dadosSpotify;
    dadosSpotify = fopen(nomeArquivo, "r");
    if (dadosSpotify == NULL) {
        return 1;
    }
    int i = 0;
    while (!feof(dadosSpotify)) {
        fscanf(dadosSpotify,"%[^,],%[^,],%f,%f", vet[i].nome_do_artista, vet[i].genero, &vet[i].total_producoes, &vet[i].ouvintes_unicos);
        i++;
    }
    fclose(dadosSpotify);
    return i;
}

void imprimeArtistas(artista vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%s\t%s\t%0.2f\t%0.2f", vet[i].nome_do_artista, vet[i].genero, vet[i].total_producoes, vet[i].ouvintes_unicos);
    }
}

artista * artistaMaisOuvido(artista vet[], int tam) {
    float valorInicialParaComparacao = vet[0].total_producoes;
    int indiceDoArtistaMaisOuvido = 0;
    for (int i = 0; i < tam; i++) {
        if (vet[i].total_producoes > valorInicialParaComparacao) {
            valorInicialParaComparacao = vet[i].total_producoes;
            indiceDoArtistaMaisOuvido = i;
        }
    }
    return &vet[indiceDoArtistaMaisOuvido];
    /*
    return indice;
    */
    /*
    dados[indice]
    dados[indice].total_producoes
    */
}

struct Genero {
    char nomeGenero[11];
    float totalOuvintes;
};
typedef struct Genero genero;

void generoMaisOuvido(artista vet[], int tam) {
    genero dadosGenero[100];
    int generoNovoEncontrado;
    int tamanhoDoNovoVetor = 0;
    for (int i = 0; i < tam; i++) {
        //
        generoNovoEncontrado = 0;
        //
        for (int j = 0; j < tam; j++) {
            if (strcmp(dadosGenero[j].nomeGenero, vet[i].genero) == 0) {
                generoNovoEncontrado = 1;
                dadosGenero[j].totalOuvintes += vet[i].ouvintes_unicos;
            }
        } if (generoNovoEncontrado == 0) {
            tamanhoDoNovoVetor++;
            strcpy(dadosGenero[i].nomeGenero, vet[i].genero);
            dadosGenero[i].totalOuvintes = vet[i].ouvintes_unicos;
        }
    }
    //
    float valorInicialParaComparacao = dadosGenero[0].totalOuvintes;
    int indiceDoGeneroComMaisOuvintes = 0;
    for (int i = 0; i < tamanhoDoNovoVetor; i++) {
        if (dadosGenero[i].totalOuvintes > valorInicialParaComparacao) {
            valorInicialParaComparacao = dadosGenero[i].totalOuvintes;
            indiceDoGeneroComMaisOuvintes = i;
        }
    }
    //
    printf("%s\t%0.2f\n", dadosGenero[indiceDoGeneroComMaisOuvintes].nomeGenero, valorInicialParaComparacao);
}