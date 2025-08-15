#include <stdio.h>

void preencheMatriz(int matriz[][3], int linhas, int colunas);
void imprimeMatriz(int matriz[][3], int linhas, int colunas);
int somaMatriz(int matriz[][3], int linhas, int colunas);
void diagonalMatriz(int matriz[][3], int linhas, int colunas);
void posMaior(int matriz[][3], int linhas, int colunas);
void alteraColuna(int matriz[][3], int linhas, int colunas, int v, int c);
void somaColuna(int matriz[][3], int linhas, int colunas);

int main() {
    int matriz[4][3];
    int soma;
    int valor;
    int coluna;
    //
    preencheMatriz(matriz, 4, 3);
    //
    imprimeMatriz(matriz, 4, 3);
    //
    soma = somaMatriz(matriz, 4, 3);
    printf("Soma da matriz: %d\n", soma);
    //
    diagonalMatriz(matriz, 4, 3);
    //
    posMaior(matriz, 4, 3);
    //
    somaColuna(matriz, 4, 3);
    //
    printf("Digite o valor que deseja multiplicar uma coluna: ");
    scanf("%d", &valor);
    printf("Digite a coluna que deseja ser multiplicada: ");
    scanf("%d", &coluna);
    if (coluna >= 0 && coluna <= 2) {
    alteraColuna(matriz, 4, 3, valor, coluna);
    } else {
        printf("Valor invalido\n");
        return 0;
    }
    //
    return 0;
}

void preencheMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite um valor: ");
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
            soma+= matriz[i][j];
        }
    } return soma;
}

void diagonalMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == j) {
                printf("%d\n", matriz[i][j]);
            }
        }
    }
}

void posMaior(int matriz[][3], int linhas, int colunas) {
    int maior = matriz[0][0];
    int linhaMaior = 0;
    int colunaMaior = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    } printf("Posicao do maior elemento da matriz: [%d][%d]\n", linhaMaior, colunaMaior);
}

void alteraColuna(int matriz[][3], int linhas, int colunas, int v, int c) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (j == c) {
                matriz[i][j] *= v;
                printf("%d\t", matriz[i][j]);
            } else {
                printf("%d\t", matriz[i][j]);
            }
        } printf("\n");
    }
}

void somaColuna(int matriz[][3], int linhas, int colunas) {
    int vetor[3];
    for (int j = 0; j < colunas; j++) {
        int somaColunaValores = 0;
        for (int i = 0; i < linhas; i++) {
            somaColunaValores += matriz[i][j];
        } vetor[j] = somaColunaValores;
    }

    for (int j = 0; j < colunas; j++) {
        printf("%d\t", vetor[j]);
    } printf("\n");
}