#include <stdio.h>

void preencheMatriz(int matriz[][5]);
void calcMatriz(int matriz[][5]);

int main() {
    int mat[5][5];
    //
    preencheMatriz(mat);
    //
    calcMatriz(mat);
    //
    return 0;
}

void preencheMatriz(int matriz[][5]) {
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void calcMatriz(int matriz[][5]) {
    int somaValores = 0;
    int vetor[16];
    int controleVetor = 0;
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            if ((i != j) && (i + j != 4)) {
                somaValores += matriz[i][j];
                vetor[controleVetor] = matriz[i][j];
                controleVetor++;
            }
        }
    }
    //
    for (int i = 0; i < 16; i++) {
        printf("%d\t", vetor[i]);
    } printf("\n");
    //
    printf("Soma dos elementos nao pertencentes a diagonal principal e secundaria:\n");
    printf("%d\n", somaValores);
}