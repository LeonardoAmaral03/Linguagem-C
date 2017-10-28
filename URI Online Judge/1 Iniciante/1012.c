#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

int main()
{
	double A, B, C, Triangulo, Circulo, Trapezio, Quadrado, Retangulo;
	
	scanf("%lf%lf%lf", &A, &B, &C);
	
	Triangulo = (A * C) / 2;
	Circulo = 3.14159 * pow(C,2);
	Trapezio = ((A + B) * C) / 2;
	Quadrado = B * B;
	Retangulo = A * B;
	
	printf("TRIANGULO: %.3lf\n", Triangulo);
	printf("CIRCULO: %.3lf\n", Circulo);
	printf("TRAPEZIO: %.3lf\n", Trapezio);
	printf("QUADRADO: %.3lf\n", Quadrado);
	printf("RETANGULO: %.3lf\n", Retangulo);
	
	return 0;
}