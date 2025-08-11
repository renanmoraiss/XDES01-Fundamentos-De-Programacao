#include <stdio.h>

int main() {
    int a;
    int b;
    int *p1;
    int *p2;
    p1 = &a;
    p2 = &b;

    scanf("%d", &b); // 5
    scanf("%d", p1); // 3

    printf("a: %d\n", a); // 3
    printf("b: %d\n", b); // 5
    printf("*p1: %d\n", *p1); // 3
    printf("*p2: %d\n", *p2); // 5

    return 0;
}// update for commit
// update for commit
