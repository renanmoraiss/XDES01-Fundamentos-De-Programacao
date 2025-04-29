#include <stdio.h>

int main() {
    int n1, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
    //
    printf("Digite um numero: ");
    scanf("%d", &n1);
    //
    while (n1 >= 0) {
        if (n1 <= 25) {
            intervalo1 += 1;
        }
        else if (n1 >= 26 && n1 <= 50) {
            intervalo2 += 1;
        }
        else if (n1 >= 51 && n1 <= 75) {
            intervalo3 += 1;
        }
        else if (n1 >= 76 && n1 <= 100) {
            intervalo4 += 1;
        }
    //
    printf("Digite um numero: ");
    scanf("%d", &n1);
    }
    //
    printf("[0,25] = %d\n", intervalo1);
    printf("[26,50] = %d\n", intervalo2);
    printf("[51,75] = %d\n", intervalo3);
    printf("[76,100] = %d\n", intervalo4);
    //
    return 0;
}