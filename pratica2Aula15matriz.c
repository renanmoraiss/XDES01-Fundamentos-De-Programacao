#include <stdio.h>

void preencheMatriz(int matriz[][3], int linhas, int colunas);
void imprimeMatriz(int matriz[][3], int linhas, int colunas);
int somaMatriz(int matriz[][3], int linhas, int colunas);
void diagonalMatriz(int matriz[][3], int linhas, int colunas);
void posMaior(int matriz[][3], int linhas, int colunas);
void alteraColuna(int matriz[][3], int linhas, int colunas);

int main() {
    int matriz[4][3];
    int soma = 0;
    int somaColunas = 0;
    //
    preencheMatriz(matriz, 4, 3);
    //
    imprimeMatriz(matriz, 4, 3);
    //
    soma = somaMatriz(matriz, 4, 3);
    printf("Soma: %d\n", soma);
    //
    diagonalMatriz(matriz, 4, 3);
    //
    posMaior(matriz, 4, 3);
    //
    alteraColuna(matriz, 4, 3);
    //
    return 0;
}

void preencheMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite um valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimeMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        } printf("\n");
    } 
}

int somaMatriz(int matriz[][3], int linhas, int colunas) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    } return soma;
}

void diagonalMatriz(int matriz[][3], int linhas, int colunas) {
    printf("Elementos da diagonal: ");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == j) {
                printf("%d\t", matriz[i][j]);
            }
        }
    } printf("\n");
}

void posMaior(int matriz[][3], int linhas, int colunas) {
    int posLinhaMaior = 0;
    int posColunaMaior = 0;
    int maior = matriz[0][0];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                posLinhaMaior = i;
                posColunaMaior = j;
            }
        }
    } printf("Posicao do maior elemento: [%d][%d]\n", posLinhaMaior, posColunaMaior);
}

void alteraColuna(int matriz[][3], int linhas, int colunas) {
    int colunaEscolhida;
    int valorEscolhido;
    //
    printf("Informe a coluna que deseja multiplicar (0 a 2): ");
    scanf("%d", &colunaEscolhida);
    //
    printf("Informe o valor que deseja multiplicar a coluna escolhida: ");
    scanf("%d", &valorEscolhido);
    //
    printf("Coluna %d apos a multiplicacao por %d: \n", colunaEscolhida, valorEscolhido);
    for (int i = 0; i < linhas; i++) {
        matriz[i][colunaEscolhida] *= valorEscolhido;
        printf("%d\n", matriz[i][colunaEscolhida]);
    }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
