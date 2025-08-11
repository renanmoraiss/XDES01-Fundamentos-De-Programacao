#include <stdio.h>

int main() {
float *a;
float b;

//imprime endereços
printf("Endereco de a: %p\n", &a); //%p é utilizado no printf para imprimir ponteiros (endereços)
printf("Endereco de b: %p\n", &b);

//inicialização das variáveis
b = 25.03;
a = &b;

//imprime valores
printf("Valor armazendo em a: %0.2f\n", *a); 
printf("Valor armazenado em b: %0.2f\n", b);

return 0;
}// update for commit
// update for commit
