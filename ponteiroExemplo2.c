#include <stdio.h>

int main() {
    int x = 5, y; //x = 5, y não foi inicializado.
    int *p = &x; //*p aponta para o endereço de memória de x.

    y = *p + 2; // *p = valor de x => 5; y = 5 + 2 = 7 (y = 7).
    *p = y + 1; // *p = 7 + 1 => *p = 8, então x = 8, porque p aponta para x.

    printf("%d %d\n", x, y);
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
