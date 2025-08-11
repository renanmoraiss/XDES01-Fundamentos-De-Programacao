#include <stdio.h>

void preencheCodigo(int *code);
void verificaCodigo(int *code);

int main() {
    int codigo;
    //
    preencheCodigo(&codigo);
    //
    verificaCodigo(&codigo);
    //
    return 0;
}

void preencheCodigo(int *code) {
    printf("Digite seu codigo de acesso: ");
    scanf("%d", code);
}

void verificaCodigo(int *code) {
    if ((*code == 1) || (*code == 2)) {
        printf("Acesso permitido");
    } else {
        printf("Acesso negado");
    }
}// update for commit
// update for commit
