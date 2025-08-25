#include <stdio.h>

void usuarioValoresTotais(int *N);
void preencheValor(int *N, float *s);
float calculaMedia(int *N, float *s);

int main() {
   int n;
   float soma = 0.0;
   float media = 0.0;
   //
   usuarioValoresTotais(&n);
   //
   preencheValor(&n, &soma);
   //
   media = calculaMedia(&n, &soma);
   printf("Media: %0.2f\n", media);
   //
   return 0; 
}

void usuarioValoresTotais(int *N) {
    printf("Deseja calcular a media arit. de quantos numeros: ");
    scanf("%d", N);
}

void preencheValor(int *N, float *s) {
    float valor;
    for (int i = 1; i <= *N; i++) {
        printf("Digite um numero: ");
        scanf("%f", &valor);
        *s += valor;
    } printf("Soma: %0.2f\n", *s);
}

float calculaMedia(int *N, float *s) {
    float media;
    media = *s / (float)*N;
    return media;
}