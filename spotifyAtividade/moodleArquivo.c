#include <stdio.h>
#include <string.h>

struct Artista { //STRUCT CONTENDO OS DADOS DO ARTISTA
    char nome_do_artista[30];
    char genero[10];
    float total_de_producoes;
    float ouvintes_unicos;
};

typedef struct Artista artista; //TIPO DA STRUCT -> artista

//PROTÓTIPO DAS FUNÇÕES
int carregaDados(artista vet[], char nomeArquivo[]); //1a função
void imprimeArtistas(artista vet[], int tam); //2a função
artista * artistaMaisOuvido(artista vet[], int tam); //3a função
void generoMaisOuvido(artista vet[], int tam); //4a função


int main() {
    artista vet[100];
    char nome_arquivo[30];
    int total_artistas;
    artista *artista_mais_ouvido;
    //
    scanf("%s", nome_arquivo);
    //
    total_artistas = carregaDados(vet, nome_arquivo); //chamada da 1a função
    //
    imprimeArtistas(vet, total_artistas); //chamada da 2a função
    //
    artista_mais_ouvido = artistaMaisOuvido(vet, total_artistas); //chamada da 3a função
    printf("\n%s\t%s\t%0.2f\t%0.2f\n", artista_mais_ouvido->nome_do_artista, artista_mais_ouvido->genero, artista_mais_ouvido->total_de_producoes, artista_mais_ouvido->ouvintes_unicos);
    //
    generoMaisOuvido(vet, total_artistas); //chamda da 4a função
    //
    return 0;
}

int carregaDados(artista vet[], char nomeArquivo[]) {
    FILE *spotify;
    //
    spotify = fopen(nomeArquivo, "r"); //ABERTURA DO ARQUIVO
    if (spotify == NULL) {
        return 1;
    }
    //
    int i = 0;
    while (!feof(spotify)) { //LOOP PARA LER OS DADOS DO ARQUIVO
        fscanf(spotify, "%[^,], %[^,], %f, %f", vet[i].nome_do_artista, vet[i].genero, &vet[i].total_de_producoes, &vet[i].ouvintes_unicos);
        i++;
    }
    fclose(spotify); //FECHAR O ARQUIVO DEPOIS DA LEITURA
    //
    return i; //RETORNA O TOTAL DE ARTISTAS
}

void imprimeArtistas(artista vet[], int tam) {
    for (int i = 0; i < tam; i++) { //LOOP PARA IMPRIMIR OS DADOS DO ARTISTA
        printf("%s\t%s\t%0.2f\t%0.2f", vet[i].nome_do_artista, vet[i].genero, vet[i].total_de_producoes, vet[i].ouvintes_unicos);
    }
}

artista *artistaMaisOuvido(artista vet[], int tam) {
    float maiorNumeroDeReproducoes = vet[0].total_de_producoes;
    int indiceArtistaMaisOuvido = 0;
    for (int i = 0; i < tam; i++) { //LOOP PARA PERCORRER A STRUCT E ENCONTRAR O ARTISTA MAIS OUVIDO
        if (vet[i].total_de_producoes > maiorNumeroDeReproducoes) {
            maiorNumeroDeReproducoes = vet[i].total_de_producoes;
            indiceArtistaMaisOuvido = i;
        }
    }
    return &vet[indiceArtistaMaisOuvido];
}

void generoMaisOuvido(artista vet[], int tam) {
    
}