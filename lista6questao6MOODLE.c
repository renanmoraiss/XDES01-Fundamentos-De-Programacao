#include <stdio.h>

int main() {
    //Declaração padrão de inteiros
    int a = 4, b = 7, c = 2;
    //
    //Declaração de ponteiros inteiros (ponteiro armazena um endereço de memória)
    int *p = &a; //ponteiro *p aponta para o endereço de memória de a, que é 4.
    int *q = &b; //ponteiro *q aponta para o endereço de memória de b, que é 7.
    int *r = &c; //ponteiro *r aponta para o endereço de memória de c, que é 2.
    //
    *p = *q - *r; // => a = b - c => a = 7 - 2 = 5. (a = 5)
    r = p; // r = &a (r aponta para o endereço de a agora). => r e p apontam para o mesmo endereço.
    *q = *r + *q; // => b = a + b => b = 5 + 7 = 12. (b = 12)
    //c = 2 (não foi alterado em nenhuma operação).
    //
    printf("%d %d %d\n", a, b, c);
    //
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
