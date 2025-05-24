#include <stdio.h>

void preencheValor(int *valor1, int *valor2);
int retornaMenor(int *valor1, int *valor2);

int main() {
    int n1;
    int n2;
    int menor;
    //
    preencheValor(&n1, &n2);
    //
    menor = retornaMenor(&n1, &n2);
    printf("Menor: %d", menor);
    //
    return 0;
}

void preencheValor(int *valor1, int *valor2) {
    printf("Digite o primeiro valor: ");
    scanf("%d", valor1);
    //
    printf("Digite o segundo valor: ");
    scanf("%d", valor2);
}

int retornaMenor(int *valor1, int *valor2) {
    if (*valor1 < *valor2) {
        return *valor1;
    } else {
        return *valor2;
    }
}

//quando se está lidando com ponteiro, não se deve usar o & no scanf (pois o ponteiro já é o endereço).
//Só se usa o & no scanf com variável comum.