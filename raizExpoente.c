#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    scanf("%lf", &numero);
    if (numero >= 0 ) {
        printf("%.2lf", sqrt(numero));
    }
    else if (numero < 0) {
        printf("%.2lf", pow(numero,2));
    }
    return 0;

}