#include <stdio.h>
#include <math.h>

int main() {
    char sexo;
    float altura, peso, pesoIdeal, imc;

    scanf(" %c", &sexo);
    scanf("%f", &peso);
    scanf("%f", &altura);

    switch(sexo) {
        case 'M':
        pesoIdeal = (72.7 * altura) - 58;
        printf("%0.2f\n", pesoIdeal);
        break;

        case 'F':
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("%0.2f\n", pesoIdeal);
        break;
    }

    imc = peso / (altura * altura);
    printf("%0.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    }
    else {
        if ((imc >= 18.5) && (imc < 25)) {
            printf("Peso normal\n");
        }
        if ((imc >=25) && (imc < 30)) {
            printf("Acima do peso\n");
        }
        if (imc >= 30) {
            printf("Obeso\n");
        }
    }

    if (imc >=25) {
        printf("%0.2f\n", peso = peso - pesoIdeal);
        printf("%0.2f", pesoIdeal / (altura * altura));
    }

    return 0;
}