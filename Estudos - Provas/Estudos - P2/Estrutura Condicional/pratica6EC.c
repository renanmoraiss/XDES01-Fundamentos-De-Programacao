#include <stdio.h>

void preencheIdade(int *idd);
void testandoIdade(int *idd);

int main() {
    int idade;
    //
    preencheIdade(&idade);
    //
    testandoIdade(&idade);
    //
    return 0;
}

void preencheIdade(int *idd) {
    printf("Digite a sua idade: ");
    scanf("%d", idd);
}

void testandoIdade(int *idd) {
    if (*idd < 16) {
        printf("Nao pode votar");
    } else {
        if (*idd < 18) {
            printf("Facultativo");
        } else {
            printf("Deve votar");
        }
    }
}