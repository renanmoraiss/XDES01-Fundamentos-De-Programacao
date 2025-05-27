#include <stdio.h>

void preencheVetor(int vet[], int tamanho);
void imprimeVetor(int vet[], int tamanho);
int somaVetor(int vet[], int tamanho);
float mediaVetor(int vet[], int tamanho);
void elementosMaioresQue5(int vet[], int tamanho, int *contador);
int maiorValor(int vet[], int tamanho);
int menorValor(int vet[], int tamanho);
void somaComOMaiorValor(int vet[], int tamanho, int maiorElemento);
void vetorInverso(int vet[], int tamanho);

int main() {
    int vetor[5];
    int s;
    float m;
    int cont = 0;
    int maiorV;
    int menorV;
    //
    preencheVetor(vetor, 5);
    //
    imprimeVetor(vetor, 5);
    //
    s = somaVetor(vetor, 5);
    printf("Soma: %d\n", s);
    //
    m = mediaVetor(vetor, 5);
    printf("Media: %0.2f\n", m);
    //
    elementosMaioresQue5(vetor, 5, &cont);
    printf("Elementos maiores que 5: %d\n", cont);
    //
    maiorV = maiorValor(vetor, 5);
    printf("Maior elemento: %d\n", maiorV);
    //
    menorV = menorValor(vetor, 5);
    printf("Menor elemento: %d\n", menorV);
    //
    printf("Vetor Inverso:\n");
    vetorInverso(vetor, 5);
    //
    printf("Soma dos elementos com o maior valor:\n");
    somaComOMaiorValor(vetor, 5, maiorV);
    //
    return 0;
}

void preencheVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
}

void imprimeVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Valor da posicao %d: %d\n", i, vet[i]);
    }
}

int somaVetor(int vet[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vet[i];
    } return soma;
}

float mediaVetor(int vet[], int tamanho) {
    int somaValores = 0;
    float mediaValores;
    for (int i = 0; i < tamanho; i++) {
        somaValores += vet[i];
    }
    mediaValores = (float)somaValores / (float)tamanho;
    return mediaValores;
}

void elementosMaioresQue5(int vet[], int tamanho, int *contador) {
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] > 5) {
            *contador += 1;
        }
    }
}

int maiorValor(int vet[], int tamanho) {
    int maiorValor = vet[0];
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] > maiorValor) {
            maiorValor = vet[i];
        }
    }
    return maiorValor;
}

int menorValor(int vet[], int tamanho) {
    int menorValor = vet[0];
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] < menorValor) {
            menorValor = vet[i];
        }
    }
    return menorValor;
}

void vetorInverso(int vet[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d\n", vet[i]);
    }
}

void somaComOMaiorValor(int vet[], int tamanho, int maiorElemento) {
    for (int i = 0; i < tamanho; i++) {
        vet[i] = vet[i] + maiorElemento;
        printf("%d\t", vet[i]);
    }
}