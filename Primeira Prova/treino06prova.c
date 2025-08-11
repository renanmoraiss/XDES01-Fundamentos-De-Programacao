#include <stdio.h>

int main() {
    float salarioBase, gratificacao, imposto, salarioFinal;
    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salarioBase);
    gratificacao = salarioBase * 0.05;
    printf("Gratificacao: %0.2f\n", gratificacao);
    imposto = salarioBase * 0.07;
    printf("Imposto: %0.2f\n", imposto);
    salarioFinal = salarioBase + gratificacao - imposto;
    printf("Salario a receber: %0.2f\n", salarioFinal);
    return 0;
}

/*
ALGORITMO
DECLARE salarioBase, gratificacao, imposto, salarioFinal REAL
ESCREVA("Escreva o salario base do funcionario: ")
LEIA salarioBase
gratificacao <- salarioBase * 0.05
ESCREVA gratificacao
imposto <- salarioBase * 0.07
ESCREVA imposto
salarioFinal = salarioBase + gratificacao - imposto
ESCREVA salarioFINAL
FIM_ALGORITMO
*/// update for commit
// update for commit
