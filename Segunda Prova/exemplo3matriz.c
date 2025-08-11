#include <stdio.h>

int main() {
    int linhas = 5;
    int colunas = 3;
    int mat[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", mat[i][j]);
        } printf("\n");
    }

    return 0;
}// update for commit
// update for commit
