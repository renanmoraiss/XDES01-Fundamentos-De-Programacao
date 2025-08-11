#include <stdio.h>

int main() {
    float n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um segundo numero: ");
    scanf("%f", &n2);
    printf("Digite um terceiro numero: ");
    scanf("%f", &n3);

    if((n1 > n3) && (n1> n2)) {
        printf("O maior numero e: %0.2f", n1);
    }
    if((n2 > n3) && (n2 > n1)) {
        printf("O maior numero e: %0.2f", n2);
    }
    if((n3 > n1) && (n3 > n2)) {
        printf("O maior numero e: %0.2f", n3);
    }
    if((n1 == n2) || (n2 == n3) || (n1 == n3)) {
        printf("Os numeros devem ser diferentes!");
        return 1;
    }

    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
