#include <stdio.h>
#include <math.h>

struct Coordenadas {
    int posicaoX;
    int posicaoY;
};

typedef struct Coordenadas pontos;

int main() {
    pontos ponto;
    int xAoQuadrado;
    int yAoQuadrado;
    int somaDosQuadrados;
    float raiz;
    printf("Posicao X: ");
    scanf("%d", &ponto.posicaoX);
    //
    printf("Posicao Y: ");
    scanf("%d", &ponto.posicaoY);
    //
    xAoQuadrado = pow(ponto.posicaoX, 2);
    yAoQuadrado = pow(ponto.posicaoY, 2);
    somaDosQuadrados = xAoQuadrado + yAoQuadrado;
    raiz = sqrt((float)somaDosQuadrados);
    printf("A distancia entre (0,0) e (%d,%d) eh de %0.2f\n", ponto.posicaoX, ponto.posicaoY, raiz);
    //
    return 0;
}// update for commit
// update for commit
