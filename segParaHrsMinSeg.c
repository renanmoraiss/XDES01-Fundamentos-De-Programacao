#include <stdio.h>

int main() {
    int seg, h, min, seg2;
    printf("Informe um tempo em segundos: ");
    scanf("%d", &seg);

    h = seg / 3600;
    printf("%d hora(s),", h);
    min = (seg % 3600) / 60;
    printf(" %d minuto(s),", min);
    seg2 = (seg % 60);
    printf(" %d segundo(s)", seg2);

    return 0;
}