#include <stdio.h>

int main () {

int idade, maiorIdd = 0, menorIdd = 150, mulheresSalarioAte100 = 0, totalDeSalarios = 0;
char sexo;
float somaSalario = 0, salario, mediaSalarial;
//
do {
    printf("\n");
    printf("Idade: ");
    scanf("%d", &idade);
    //
    if (idade > maiorIdd) {
        maiorIdd = idade;
    }
    //
    if (idade < menorIdd) {
        menorIdd = idade;
    }
    //
    printf("Sexo: ");
    scanf(" %c", &sexo);
    //
    printf("Salario: ");
    scanf("%f", &salario);
    //
    if (salario > 0) {
        totalDeSalarios += 1;
    }
    //
    if ((sexo == 'F') && (salario <= 100)) {
        mulheresSalarioAte100 += 1;
    }
    //
    somaSalario += salario;
} while(idade >= 0);
//
mediaSalarial = somaSalario / totalDeSalarios;
printf("Media Salarial: %0.2f\n", mediaSalarial);
printf("Maior Idade: %d\n", maiorIdd);
printf("Menor Idade: %d\n", menorIdd);
printf("Quantidade de mulheres com salario ate R$100,00: %d\n", mulheresSalarioAte100);
//
return 0;
}