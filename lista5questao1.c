#include <stdio.h>

int main () {
    int a, i;
    int negativo = 0;
    for (i = 1; i <= 5; i += 1) {
        printf("Digite um valor: ");
        scanf("%d", &a);
        if (a < 0) {
            negativo += 1;
        }
    } 
    printf("%d", negativo);
    return 0;
}