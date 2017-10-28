#include <stdio.h>

int main() {

    double A, B, Media;

    scanf("%lf%lf", &A, &B);

    Media = ((A * 0.35) + (B * 0.75)) / 1.1;

    printf("MEDIA = %.5lf\n", Media);

    return 0;
}