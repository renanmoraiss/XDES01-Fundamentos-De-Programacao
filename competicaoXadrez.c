#include <stdio.h>

int main() {
    int nascimento, res;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &nascimento);

    res = 2025 - nascimento;
    printf("Idade = %d\n", res);
    if ((res >= 12) && (res <= 15)) {
        printf("Apto a participar do campeonato");
    }
    else {
        printf("Nao pode participar do campeonato");
    }
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
