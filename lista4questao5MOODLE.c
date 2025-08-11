#include <stdio.h>

int main () {

int idade, maiorIdd = 0, menorIdd = 150, mulheresSalarioAte100 = 0, totalDeSalarios = 0;
char sexo;
float somaSalario = 0, salario, mediaSalarial;
//
do {
    scanf("%d", &idade);
    //
    if (idade > maiorIdd) {
        maiorIdd = idade;
    }
    //
    if (idade < menorIdd && idade > 0) {
        menorIdd = idade;
    }
    if (idade < 0) {
        break;
    }
    //
    scanf(" %c", &sexo);
    //
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
printf("media salarial: %0.2f\n", mediaSalarial);
printf("maior idade: %d\n", maiorIdd);
printf("menor idade: %d\n", menorIdd);
printf("mulheres com salario ate 100: %d\n", mulheresSalarioAte100);
//
return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
