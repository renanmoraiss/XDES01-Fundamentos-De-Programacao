#include <stdio.h>

int main() {
    double baseMaior, baseMenor, altura, area;

    printf("Base maior: ");
    scanf("%lf", &baseMaior);

    printf("Base menor: ");
    scanf("%lf", &baseMenor);

    printf("Altura: ");
    scanf("%lf", &altura);

    area = (baseMaior + baseMenor) * altura / 2;
    printf("Area = %0.2lf", area);

    return 0;
}