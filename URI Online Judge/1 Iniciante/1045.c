#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int ordena(const void *p1, const void *p2)
{
	double *i = (double *)p1;
	double *j = (double *)p2;
	
	if(*i < *j)
		return 1;
	else
		if(*i == *j)
			return 0;
		else
			return -1;
}

int main()
{
	double val[3], A, B, C;
	
	scanf("%lf %lf %lf", &val[0], &val[1], &val[2]);
	
	qsort(val, 3, sizeof(double), ordena);
	
	A = val[0];
	B = val[1];
	C = val[2];
	
	if(A >= (B + C))
		printf("NAO FORMA TRIANGULO\n");
	else if(pow(A, 2) == (pow(B, 2) + pow(C, 2)))
		printf("TRIANGULO RETANGULO\n");
	else if(pow(A, 2) > (pow(B, 2) + pow(C, 2)))
		printf("TRIANGULO OBTUSANGULO\n");
	else if(pow(A, 2) < (pow(B, 2) + pow(C, 2)))
		printf("TRIANGULO ACUTANGULO\n");
	
	if(A == B && B == C)
		printf("TRIANGULO EQUILATERO\n");
	else if(A == B || B == C || C == A)
		printf("TRIANGULO ISOSCELES\n");
	
	return 0;
}

/*se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES*/