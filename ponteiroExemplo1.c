#include <stdio.h>

int main() {
    //DECLARAÇÃO DAS VARIÁVEIS
    float *a;
    float b;

    //MOSTRAR O ENDEREÇO DAS VARIÁVEIS
    printf("%p\n", &a); //%p é o formato usado no printf para imprimir ponteiros (endereços).
    printf("%p\n", &b); //%p é o formato usado no printf para imprimir ponteiros (endereços).

    //INICIALIZAÇÃO DAS VARIÁVEIS
    b = 18.75;
    a = &b; // a = &b faz com que o ponteiro a aponte para o endereço de memória da variável b.
                         //qualquer modificação feita em b afetará a variável a.

    //MOSTRAR O VALOR DAS VARIÁVEIS
    printf("a: %0.2f\n", *a);
    printf("b: %0.2f\n", b);

    b = b * 5;

    //MOSTRAR O VALOR DAS VARIÁVEIS
    printf("a: %0.2f\n", *a);
    printf("b: %0.2f\n", b);

    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
