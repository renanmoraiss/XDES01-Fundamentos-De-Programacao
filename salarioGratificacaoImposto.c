#include <stdio.h>

int main() {

   //Declarando as variáveis
   float salariobase, gratificacao, imposto, resultado;;

   //Salário  base do funcionário
   printf("Digite o salario base do funcionario: ");
   scanf("%f", &salariobase);

   //Cálculo + resultado (gratificacao)
   gratificacao = salariobase * 0.05;
   printf("Gratificacao: R$%.2f\n", gratificacao);

   //Cálculo + resultado (imposto)
   imposto = salariobase * 0.07;
   printf("Imposto: R$%.2f\n", imposto);

   //Salário final
   resultado = salariobase + gratificacao - imposto;
   printf("Salario a receber: R$%.2f", resultado);

   //Retorno do programa = funcionou
   return 0;
}
