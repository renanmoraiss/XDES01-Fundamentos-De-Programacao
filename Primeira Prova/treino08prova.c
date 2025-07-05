#include <stdio.h>
#include <math.h>

int main() {
    double number, numberTwo;
    printf("Digite um valor inteiro: ");
    scanf("%lf", &number);
    printf("Raiz quadrada: %0.0lf\n", sqrt(number));
    printf("Potencia: %0.0lf\n", pow(number, 2));
    printf("Digite um valor decimal: ");
    scanf("%lf", &numberTwo);
    printf("Arredondado para baixo: %0.2f\n", floor(numberTwo));
    printf("Arredondado para cima: %0.2lf\n", ceil(numberTwo));
    return 0;
}