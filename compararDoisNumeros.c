#include <stdio.h>

int main() {
    float n1, n2;
    scanf("%f", &n1);
    scanf("%f", &n2);
    if (n1 < n2) {
        printf("%0.2f", n1);
    }
    else {
        printf("%0.2f", n2);
    }
    return 0;
}