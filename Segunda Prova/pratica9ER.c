#include <stdio.h>

int main() {
    int idade;
    char sexo;
    float salario;
    float somaSalario = 0.0;
    float mediaSalario;
    int contador = 0;
    int menorIdd = 1000;
    int maiorIdd = 0;
    int qtdMulheresSalarioAte100Reais = 0;
    //
    do {
    printf("Idade: ");
    scanf("%d", &idade);
    if (idade > maiorIdd) {
        maiorIdd = idade;
    } if (idade > 0 && idade < menorIdd) {
        menorIdd = idade;
    } if (idade < 0) {
        break;
    }
    //
    printf("Sexo: ");
    scanf(" %c", &sexo);
    //
    printf("Salario: ");
    scanf("%f", &salario);
    if ((sexo == 'F') && (salario <= 100)) {
        qtdMulheresSalarioAte100Reais++;
    }
    contador++;
    somaSalario += salario;
    } while (idade >= 0);
    //
    mediaSalario = somaSalario / (float)contador;
    printf("Media Salarial: %0.2f\n", mediaSalario);
    printf("Maior Idade: %d\n", maiorIdd);
    printf("Menor Idade: %d\n", menorIdd);
    printf("Quantidade de mulheres com salario ate R$100,00: %d", qtdMulheresSalarioAte100Reais);
    return 0;
}// update for commit
// update for commit
