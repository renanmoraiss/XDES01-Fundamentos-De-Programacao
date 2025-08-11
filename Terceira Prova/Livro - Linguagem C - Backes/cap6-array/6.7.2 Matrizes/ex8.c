#include <stdio.h>
#include <math.h>

void calculaMatriz(int mat[][10]);
void imprimeMatriz(int mat[][10]);

int main() {
    int mat[10][10];
    //
    calculaMatriz(mat);
    //
    imprimeMatriz(mat);
    //
    return 0;
}

void calculaMatriz(int mat[][10]) {
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                mat[i][j] = (2 * i) + (7 * j) - 2;
            } else if (i == j) {
                mat[i][j] = (3 * (pow(i, 2))) - 1;
            } else if (i > j) {
                mat[i][j] = (4 * (pow(i,3))) + (5 * (pow(j,2))) + 1;
            }
        }
    }
}

void imprimeMatriz(int mat[][10]) {
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 10; j++) {
            printf("%d\t", mat[i][j]);
        } printf("\n");
    }
}// update for commit
// update for commit
