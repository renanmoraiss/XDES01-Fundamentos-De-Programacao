#include <stdio.h>

int main() {
    //DECLARAÇÃO DAS VARIÁVEIS
    int a, b, *p1, *p2;

    //INICIALIZAÇÃO DOS PONTEIROS
    p1 = &a;
    p2 = &b;

    printf("Digite um valor: ");//valor 5
    //LEITURA
    scanf("%d", &b); //b = 5; p2 = 5;

    printf("Digite um valor: "); //valor 3
    //LEITURA
    scanf("%d", p1); //p1 = 3; a = 3;

    //MOSTRAR O VALOR DAS VARIÁVEIS
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("p1: %d\n", *p1);
    printf("p2: %d\n", *p2);

    return 0;
}