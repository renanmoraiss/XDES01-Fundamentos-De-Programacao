#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("Area do triangulo: %0.2f", area);
    return 0;
}