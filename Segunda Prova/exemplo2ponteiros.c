#include <stdio.h>

int main() {
    int x = 5;
    int y;
    int *p = &x; //*p = &x... *p = 5 (indiretamente).

    y = *p + 2; // y = 5 + 2... y = 7.
    *p = y + 1; // *p = 7 + 1... *p = 8.

    printf("%d %d\n", x, y); //x = 8 e y = 7.
    return 0;
}