#include <stdio.h>

int main() {
    int n1, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
    //
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
    scanf("%d", &n1);
    }
    //
    printf("%d\n", intervalo1);
    printf("%d\n", intervalo2);
    printf("%d\n", intervalo3);
    printf("%d\n", intervalo4);
    //
    return 0;
}