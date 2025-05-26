#include <stdio.h>

int main() {
    int a = 4, b = 7, c = 2;
    int *p = &a; //*p => a (4).
    int *q = &b; //*q => b (7).
    int *r = &c; //*r => c (2).

    *p = *q - *r; //*p = 7 - 2 = 5.
    r = p; // r => a (5).
    *q = *r + *q; //*q = 5 + 7 = 12.

    printf("%d %d %d\n", a, b, c); // 5 12 2 
    return 0;
}