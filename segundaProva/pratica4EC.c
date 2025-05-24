#include <stdio.h>

void preencheIdade(int *idd);
void verificaIdade(int *idd);

int main() {
    int idade;
    //
    preencheIdade(&idade);
    //
    verificaIdade(&idade);
    //
    return 0;
}

void preencheIdade(int *idd) {
    printf("Digite a sua idade: ");
    scanf("%d", idd);
}

void verificaIdade(int *idd) {
    if ((*idd >= 12) && (*idd <=15)) {
        printf("Com %d anos voce pode participar", *idd);
    } else {
        printf("Com %d anos voce nao pode participar", *idd);
    }
}