#include <stdio.h>

int main () {
    int a;
    int negativo = 0;
    //
    for (int i = 1; i <= 5; i++) {
        scanf("%d", &a);
        if (a < 0) {
            negativo++;
        }
    } printf("%d", negativo);
    //
    return 0;
}