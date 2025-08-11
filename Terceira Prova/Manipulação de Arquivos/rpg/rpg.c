#include <stdio.h>
#include <string.h>

int registroDados(char matriz[][10], char nomeArq[]);
void imprimeMapa(char matriz[][10]);
void quantidadeTerreno(char matriz[][10]);
void encontraInimigos(char matriz[][10]);
void jogar(char matriz[][10], int X, int Y);

int main() {
    char mapaDaBatalha[10][10];
    char nomeArquivo[30] = "mapaJogo.txt";
    int totalCaracteres;
    //
    totalCaracteres = registroDados(mapaDaBatalha, nomeArquivo);
    printf("Total de caracteres: %d\n", totalCaracteres);
    //
    imprimeMapa(mapaDaBatalha);
    //
    quantidadeTerreno(mapaDaBatalha);
    //
    encontraInimigos(mapaDaBatalha);
    //
    int x;
    int y;
    printf("Linha: ");
    scanf("%d", &x);
    printf("Coluna: ");
    scanf("%d", &y);
    jogar(mapaDaBatalha, x, y);
    //
    return 0;
}

int registroDados(char matriz[][10], char nomeArq[]) {
    FILE *mapaJogo;
    int caracteres = 0;
    mapaJogo = fopen(nomeArq, "r");
    //
    if (mapaJogo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }
    //
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 10; j++) {
            //
            fscanf(mapaJogo, " %c", &matriz[i][j]);
            caracteres++;
        }
    }
    //
    fclose(mapaJogo);
    return caracteres;
}

void imprimeMapa(char matriz[][10]) {
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 10; j++) {
            //
            printf("%c", matriz[i][j]);
        } printf("\n");
    }
}

void quantidadeTerreno(char matriz[][10]) {
    int contCampoLivre = 0;
    int contPedra = 0;
    int contAgua = 0;
    int contMontanha = 0;
    int contArvore = 0;
    int contInimigo = 0;
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] == '.') {
                contCampoLivre++;
            } else if (matriz[i][j] == '#') {
                contPedra++;
            } else if (matriz[i][j] == '~') {
                contAgua++;
            } else if (matriz[i][j] == '^') {
                contMontanha++;
            } else if (matriz[i][j] == 'T') {
                contArvore++;
            } else if (matriz[i][j] == 'X') {
                contInimigo++;
            }
        }
    }
    printf("Quantidade de cada tipo de terreno:\n");
    printf("Campo livre: %d\n", contCampoLivre);
    printf("Pedra: %d\n", contPedra);
    printf("Agua: %d\n", contAgua);
    printf("Montanha: %d\n", contMontanha);
    printf("Arvore: %d\n", contArvore);
    printf("Inimigo: %d\n", contInimigo);
}

void encontraInimigos (char matriz[][10]) {
    int indiceI;
    int indiceJ;
    int contadorInimigos = 0;
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] == 'X') {
                indiceI = i;
                indiceJ = j;
                contadorInimigos++;
                //
                printf("Inimigo %d: [%d][%d]\n", contadorInimigos, indiceI, indiceJ);
            } 
        }
    }
}

void jogar(char matriz[][10], int X, int Y) {
    if (matriz[X][Y] == 'X') {
        printf("Essa posicao tem inimigo!\n");
        printf("Voce perdeu.\n");
    } else {
        printf("Essa posicao nao tem inimigo!\n");
        printf("Voce pode atacar algum inimigo.\n");
        //
        int novaPosLinha;
        int novaPosColuna;
        //
        printf("Linha: ");
        scanf("%d", &novaPosLinha);
        //
        printf("Coluna: ");
        scanf("%d", &novaPosColuna);
        //
        if (((novaPosLinha >= 0 && novaPosLinha <= 9) && (novaPosColuna == Y)) || ((novaPosLinha == X && novaPosColuna >= 0 && novaPosColuna <= 9))) {
            if (matriz[novaPosLinha][novaPosColuna] == 'X') {
                printf("Essa posicao tem inimigo.\n");
                printf("Voce venceu!\n");
            } else {
                printf("Essa posicao nao tem inimigo!\n");
                printf("O jogo empatou.\n");
            }
        } else {
            printf("Posicao nao permitida!\n");
        }
    }
}// update for commit
// update for commit
