#include <stdio.h>

#define NUM_ESTACOES 5
#define NUM_DIAS 7
#define NUM_MEDIDAS 5

void preencheMatriz(float temp[][NUM_DIAS], int linhas, int colunas);
void calculaMedia(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas);
void encontraMediana(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas);
void encontraMaior(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas);
void encontraMenor(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas);
void encontraAmplitude(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas);
void imprimeMatrizTemp(float temp[][NUM_DIAS], int linhas, int colunas);
void imprimeMatrizRes(float res[][NUM_MEDIDAS], int linhas, int colunas);
void imprimeOpcaoTres(float res[][NUM_MEDIDAS], int linhas, int colunas, int opcaoEscolhida);
void imprimeOpcaoQuatro(float res[][NUM_MEDIDAS], int linhas);
void imprimeOpcaoCinco(float res[][NUM_MEDIDAS], int linhas);

int main() {
    float matrizTemperaturas[NUM_ESTACOES][NUM_DIAS];
    float matrizRes[NUM_ESTACOES][NUM_MEDIDAS];
    int opcao, opcao2da3;
    //
    preencheMatriz(matrizTemperaturas, NUM_ESTACOES, NUM_DIAS);
    //
    calculaMedia(matrizTemperaturas, matrizRes, NUM_ESTACOES, NUM_DIAS);
    //
    encontraMediana(matrizTemperaturas, matrizRes, NUM_ESTACOES, NUM_DIAS);
    //
    encontraMaior(matrizTemperaturas, matrizRes, NUM_ESTACOES, NUM_DIAS);
    //
    encontraMenor(matrizTemperaturas, matrizRes, NUM_ESTACOES, NUM_DIAS);
    //
    encontraAmplitude(matrizTemperaturas, matrizRes, NUM_ESTACOES, NUM_DIAS);
    //
    scanf("%d", &opcao);
    while (opcao > 0 && opcao <= 6) {
    switch(opcao) {
        case 1:
        imprimeMatrizTemp(matrizTemperaturas, NUM_ESTACOES, NUM_DIAS);
        break;

        case 2:
        imprimeMatrizRes(matrizRes, NUM_ESTACOES, NUM_MEDIDAS);
        break;

        case 3:
        scanf("%d", &opcao2da3);
        imprimeOpcaoTres(matrizRes, NUM_ESTACOES, NUM_MEDIDAS, opcao2da3);
        break;

        case 4:
        imprimeOpcaoQuatro(matrizRes, NUM_ESTACOES);
        break;

        case 5:
        imprimeOpcaoCinco(matrizRes, NUM_ESTACOES);
        break;

        case 6:
        return 0;
        } 
        
        scanf("%d", &opcao);
    }
    //
    return 0;
}

void preencheMatriz(float temp[][NUM_DIAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%f", &temp[i][j]);
        }
    }
}

void calculaMedia(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        float soma = 0.0;
        for (int j = 0; j < colunas; j++) {
            soma += temp[i][j];
        } res[i][0] = soma / colunas;
    }
}

void encontraMediana(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        float aux[colunas];
        for (int j = 0; j < colunas; j++) {
            aux[j] = temp[i][j];
        }
    

    for (int r = 0; r < colunas - 1; r++) {
        for (int v = 0; v < colunas - r - 1; v++) {
            if (aux[v] > aux[v + 1]) {
                float valor = aux[v];
                aux[v] = aux[v + 1];
                aux[v + 1] = valor;
                }
            }
        } res[i][1] = aux[colunas / 2];
    } 
}

void encontraMaior(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        float maior = temp[i][0];
        for (int j = 0; j < colunas; j++) {
            if (temp[i][j] > maior) {
                maior = temp[i][j];
            } 
        } res[i][2] = maior;
    }
}

void encontraMenor(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        float menor = temp[i][0];
        for (int j = 0; j < colunas; j++) {
            if (temp[i][j] < menor) {
                menor = temp[i][j];
            } 
        } res[i][3] = menor;
    }
}

void encontraAmplitude(float temp[][NUM_DIAS], float res[][NUM_MEDIDAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        float maior = temp[i][0];
        float menor = temp[i][0];
        for (int j = 0; j < colunas; j++) {
            if (temp[i][j] > maior) {
                maior = temp[i][j];
            } if (temp[i][j] < menor) {
                menor = temp[i][j];
            }
        } res[i][4] = maior - menor;
    }
}

void imprimeMatrizTemp(float temp[][NUM_DIAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%0.2f\t", temp[i][j]);
        } printf("\n");
    }
}

void imprimeMatrizRes(float res[][NUM_MEDIDAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%0.2f\t", res[i][j]);
        } printf("\n");
    }
}

void imprimeOpcaoQuatro(float res[][NUM_MEDIDAS], int linhas) {
    for (int i = 0; i < linhas; i++) {
        printf("%d -- %0.2f\n", i, res[i][1]);
    }
}


void imprimeOpcaoCinco(float res[][NUM_MEDIDAS], int linhas) {
    float maiorAmplitude = res[0][4];
    int ii = 0;
    for (int i = 0; i < linhas; i++) {
        if (res[i][4] > maiorAmplitude) {
            maiorAmplitude = res[i][4];
            ii = i;
        } 
    } printf("%d -- %0.2f\n", ii, res[ii][4]);
}

void imprimeOpcaoTres(float res[][NUM_MEDIDAS], int linhas, int colunas, int opcaoEscolhida) {
    if (opcaoEscolhida >= 0 && opcaoEscolhida < linhas) {
        for (int j = 0; j < colunas; j++) {
            printf("%0.2f\t", res[opcaoEscolhida][j]);
        } printf("\n");
    }
}// update for commit
// update for commit
