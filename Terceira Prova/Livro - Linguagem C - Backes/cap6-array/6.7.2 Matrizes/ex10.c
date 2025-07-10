#include <stdio.h>

void preencheMatriz(int mat[][3]);
void calculaMatriz(int mat[][3]);

int main() {
    int mat[10][3];
    //
    preencheMatriz(mat);
    //
    calculaMatriz(mat);
    //
    return 0;
}

void preencheMatriz(int mat[][3]) {
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void calculaMatriz(int mat[][3]) {
    int piorNota1 = 0;
    int piorNota2 = 0;
    int piorNota3 = 0;
    int indice;
    for (int i = 0; i < 10; i++) {
        int notaAluno = mat[i][0];
        indice = 0;
        //
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] < notaAluno) {
                notaAluno = mat[i][j];
                indice = j;
            }
        } if (indice == 0) {
            piorNota1++;
        } else if (indice == 1) {
            piorNota2++;
        } else if (indice == 2) {
            piorNota3++;
        }
    }
    printf("Alunos cuja pior nota foi na prova 1: %d\n", piorNota1);
    printf("Alunos cuja pior nota foi na prova 2: %d\n", piorNota2);
    printf("Alunos cuja pior nota foi na prova 3: %d\n", piorNota3);
}