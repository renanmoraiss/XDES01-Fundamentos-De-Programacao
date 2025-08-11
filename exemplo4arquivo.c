#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    int tel;
    //
    FILE *arq;
    //
    arq = fopen("cadastro.txt", "w");
    if (arq == NULL) {
        return 1;
    }
    printf("Nome: ");
    scanf("%s", nome);
    //
    printf("Telefone: ");
    scanf("%d", &tel);
    //
    while (tel != 0) {
        fprintf(arq, "%s\t%d\n", nome, tel);
        //
        printf("Nome: ");
        scanf("%s", nome);
        //
        printf("Telefone: ");
        scanf("%d", &tel);
    }
    fclose(arq);
    //
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
