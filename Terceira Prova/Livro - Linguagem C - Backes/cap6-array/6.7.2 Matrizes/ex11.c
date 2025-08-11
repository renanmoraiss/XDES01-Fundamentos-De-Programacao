#include <stdio.h>

void preencheMatriz(int mat[][5]);
void calculaMatriz(int mat[][5]);

int main() {
    int matriz[5][5];
    //
    preencheMatriz(matriz);
    //
    calculaMatriz(matriz);
    //
    return 0;
}

void preencheMatriz(int mat[][5]) {
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void calculaMatriz(int mat[][5]) {
    int somaElementos = 0;
    int variavelDeControle;
    //
    for (int i = 0; i < 5; i++) {
        variavelDeControle = 0;
        //
        for (int j = 0; j < 5; j++) {
            while (variavelDeControle < 4) {
                somaElementos += mat[i][j+variavelDeControle];
                variavelDeControle++;
            }
        }
    }
    //
    printf("Soma dos elementos da diagonal principal:\n");
    printf("%d\n", somaElementos);
}// update for commit
// update for commit
