#include <stdio.h>

int retornaMaior(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int main () {
    int num1, num2, res;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num1);
    printf("Digite um valor inteiro: ");
    scanf("%d", &num2);
    res = retornaMaior(num1, num2);
    printf("%d", res);
}