#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float numeroDigitado, resultado;

    printf("Digite um numero: ");
    scanf("%f", &numeroDigitado);

    if ( numeroDigitado >=0 ) {
        resultado = sqrt(numeroDigitado);
        printf("O resultado e igual a: %f", resultado);
    }
    else {
        resultado = pow(numeroDigitado, 2);
        printf("O resltado e igual a: %f", resultado);
    }

    return 0;
}
