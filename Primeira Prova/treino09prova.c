#include <stdio.h>
#include <math.h>

int main() {
    double n1, res;
    double pi = M_PI;
    printf("Digite um numero positivo: ");
    scanf("%lf", &n1);

    res = pow(n1, 2);
    printf("%0.1lf ao quadrado: %0.2lf\n", n1, res);

    res = pow (n1, 3);
    printf("%0.1lf ao cubo: %0.2lf\n", n1, res);

    res = sqrt(n1);
    printf("Raiz quadrada de %0.1lf e: %0.2lf\n", n1, res);

    res = pow(n1, 1.0/3.0);
    printf("Raiz cubica de %0.1lf e: %0.2lf\n", n1, res);

    res = pow(n1, 1.0/4.0);
    printf("Raiz quarta de %0.1lf e: %0.2lf\n", n1, res);

    res = ceil(n1);
    printf("%0.1lf arredondado para cima: %0.0lf\n", n1, res);

    res = floor(n1);
    printf("%0.1lf arredondado para baixo: %0.0lf\n", n1, res);

    printf("O valor de PI e: %0.2lf", pi);

    return 0;
}