#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    scanf("%f", &numero);
    if (numero >= 0 ) {
        numero = sqrt(numero);
        printf("%f", numero);
    }
    else {
        numero = pow(numero, 2);
        printf("%0.2f", numero);
    }
    return 0;

}