#include <stdio.h>

int main() {

   //Declarando as variáveis
   int nasc, atual, res;

   //Ano de nascimento
   printf("Digite seu ano de nascimento: ");
   scanf("%d", &nasc);

   //Ano atual
   printf("Digite o ano atual: ");
   scanf("%d", &atual);

   //Cálculo + resultado
   res = atual - nasc;
   printf("Idade: %d", res);

   //Retorno do programa = funcionou
   return 0;
}
