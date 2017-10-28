#include <stdio.h>

int main() {

    int A, B, C, D, Diferenca;

    scanf("%d%d%d%d", &A, &B, &C, &D);

    Diferenca = (A * B - C * D);

    printf("DIFERENCA = %d\n", Diferenca);

    return 0;
}