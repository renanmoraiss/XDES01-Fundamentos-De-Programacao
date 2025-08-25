#include <stdio.h>
#include <math.h>

struct Coordenadas {
    float posX;
    float posY;
};

typedef struct Coordenadas pontos;

int main() {
    pontos p1;
    pontos p2;
    float D;
    //
    scanf("%f %f", &p1.posX, &p1.posY);
    //
    scanf("%f %f", &p2.posX, &p2.posY);
    //
    D = sqrt(pow(p2.posX - p1.posX, 2) + pow(p2.posY - p1.posY, 2));
    printf("%0.2f\n", D);
    //
    return 0;
}