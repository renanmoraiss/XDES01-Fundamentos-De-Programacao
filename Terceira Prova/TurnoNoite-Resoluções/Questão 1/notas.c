//Passou em todos os testes -> 4,0/4,0.

#include <stdio.h>
#include <string.h>

void preencherNotas(float notas[][3], char nomeArquivo[]);
void gerarRelatorio(float notas[][3]);

int main() {
    float mat[10][3];
    char nomeArquivo[30];
    //
    scanf("%s", nomeArquivo);
    //
    preencherNotas(mat, nomeArquivo);
    gerarRelatorio(mat);
    //
    return 0;
}

void preencherNotas(float notas[][3], char nomeArquivo[]) {
    FILE *arq;
    arq = fopen(nomeArquivo, "r");
    if (arq == NULL) {
        return;
    }
    //
    int cont = 0;
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 3; j++) {
            fscanf(arq, "%f", &notas[i][j]);
            cont++;
        }
    }
    fclose(arq);
}

void gerarRelatorio(float notas[][3]) {
    float piorNota;
    int contPiorNota1 = 0;
    int contPiorNota2 = 0;
    int contPiorNota3 = 0;
    int indice;
    //
    for (int i = 0; i < 10; i++) {
        indice = 0;
        piorNota = notas[i][0];
        //
        for (int j = 0; j < 3; j++) {
            if (notas[i][j] < piorNota) {
                indice = j;
                piorNota = notas[i][j];
            } 
        } if (indice == 0) {
            contPiorNota1++;
        } else if (indice == 1) {
            contPiorNota2++;
        } else if (indice == 2) {
            contPiorNota3++;
        }
    }
    printf("%d %d %d", contPiorNota1, contPiorNota2, contPiorNota3);
}