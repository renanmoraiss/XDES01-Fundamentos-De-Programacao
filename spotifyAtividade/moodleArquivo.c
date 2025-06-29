#include <stdio.h>
#include <string.h>
#include <locale.h>

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
    setlocale(LC_ALL, "");
    //
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
        fscanf(spotify, "%[^,],%[^,],%f,%f", vet[i].nome_do_artista, vet[i].genero, &vet[i].total_de_producoes, &vet[i].ouvintes_unicos);
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

struct GeneroMaisOuvido { //STRUCT PARA ARMAZENAR SOMENTE OS GENEROS MUSICAIS UMA VEZ E OS OUVINTES DE CADA GENERO
    char generoMsc[10];
    float ouvintes_unicos;
};

typedef struct GeneroMaisOuvido genero;

void generoMaisOuvido(artista vet[], int tam) {
    genero dados[8];
    float somaOuvintes[8] = {0};
    int contPop = 0, contRock = 0, contHipHop = 0, contReB = 0, contKpop = 0, contReggaeton = 0, contFunk = 0, contEletronico = 0;
    //
    for (int i = 0; i < tam; i++) { //LOOP PARA PEGAR O NOME DOS GENEROS. USO DE FLAG, POIS DEVE PEGAR O NOME DO GENERO UMA VEZ
        if ((strcmp(vet[i].genero, "Pop") == 0) && contPop != 1) {
            strcpy(dados[0].generoMsc, vet[i].genero);
            contPop = 1;
        } else if ((strcmp(vet[i].genero, "Rock") == 0) && contRock != 1) {
            strcpy(dados[1].generoMsc, vet[i].genero);
            contRock = 1;
        } else if ((strcmp(vet[i].genero, "Hip-Hop") == 0) && contHipHop != 1) {
            strcpy(dados[2].generoMsc, vet[i].genero);
            contHipHop = 1;
        } else if ((strcmp(vet[i].genero, "R&B") == 0) && contReB != 1) {
            strcpy(dados[3].generoMsc, vet[i].genero);
            contReB = 1;
        } else if ((strcmp(vet[i].genero, "K-Pop") == 0) && contKpop != 1) {
            strcpy(dados[4].generoMsc, vet[i].genero);
            contKpop = 1;
        } else if ((strcmp(vet[i].genero, "Reggaeton") == 0) && contReggaeton != 1) {
            strcpy(dados[5].generoMsc, vet[i].genero);
            contReggaeton = 1;
        } else if ((strcmp(vet[i].genero, "Funk") == 0) && contFunk != 1) {
            strcpy(dados[6].generoMsc, vet[i].genero);
            contFunk = 1;
        } else if ((strcmp(vet[i].genero, "Eletrônico") == 0) && contEletronico != 1) {
            strcpy(dados[7].generoMsc, vet[i].genero);
            contEletronico = 1;
        }
    }
    //
    for (int i = 0; i < tam; i++) { //LOOP PARA SOMAR OS OUVINTES DE CADA GENERO E GUARDAR NUM VETOR
        if (strcmp(vet[i].genero, "Pop") == 0) {
            somaOuvintes[0] += vet[i].ouvintes_unicos;
        } else if (strcmp(vet[i].genero, "Rock") == 0) {
            somaOuvintes[1] += vet[i].ouvintes_unicos;
        } else if (strcmp(vet[i].genero, "Hip-Hop") == 0) {
            somaOuvintes[2] += vet[i].ouvintes_unicos;
        } else if (strcmp(vet[i].genero, "R&B") == 0) {
            somaOuvintes[3] += vet[i].ouvintes_unicos;
        } else if (strcmp(vet[i].genero, "K-Pop") == 0) {
            somaOuvintes[4] += vet[i].ouvintes_unicos;
        } else if (strcmp(vet[i].genero, "Reggaeton") == 0) {
            somaOuvintes[5] += vet[i].ouvintes_unicos;
        } else if (strcmp(vet[i].genero, "Funk") == 0) {
            somaOuvintes[6] += vet[i].ouvintes_unicos;
        } else {
            somaOuvintes[7] += vet[i].ouvintes_unicos;
        }
    }
    //
    float generoComMaisOuvintes = somaOuvintes[0];
    int indice = 0;
    for (int i = 0; i < 8; i++) {
        if (somaOuvintes[i] > generoComMaisOuvintes) {
            indice = i;
            generoComMaisOuvintes = somaOuvintes[i];
        }
    }
    printf("%s\t%0.2f", dados[indice].generoMsc, generoComMaisOuvintes);
}