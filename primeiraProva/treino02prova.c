#include <stdio.h>
#include <math.h> 

int main() {
    char sexo;
    float peso, altura, pesoIdeal, imc, imcNovo, pesoIdealNovo;

    printf("M. Masculino\n");
    printf("F. Feminino\n");
    printf("Digite M ou F: ");
    scanf("%c", &sexo);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    switch(sexo) {
        case 'M':
        pesoIdeal = (72.7 * altura) - 58;
        printf("Peso ideal: %0.2f\n", pesoIdeal);
        break;

        case 'F':
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Peso ideal: %0.2f\n", pesoIdeal);
        break;
    }

    imc = peso / pow(altura, 2);
    printf("IMC: %0.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    }
    else {
        if ((imc >= 18.5) && (imc < 25)) {
            printf("Peso normal\n");
        }
        if ((imc >= 25) && (imc < 30)) {
            printf("Acima do peso\n");
        }
        if (imc >= 30) {
            printf("Obeso\n");               
        }
    }

    if (imc >= 25) {
        pesoIdealNovo = peso - pesoIdeal;
        printf("Peso ideal novo: %0.2f\n", pesoIdealNovo); 
        imcNovo = pesoIdeal / pow(altura, 2);
        printf("IMC novo: %0.2f\n", imcNovo);
    }


    return 0;
}