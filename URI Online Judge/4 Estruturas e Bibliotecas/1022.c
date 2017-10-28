#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct racional {int numerador; int denominador;} tblrac;

int simplifica(int N, int D)
{
	if(N < 0)
		N = -N;
	if(D < 0)
		D = -D;
	
	if(N % D == 0)
		return D;
	else
		return simplifica(D, N % D);
}

int main()
{
	tblrac X, Y, resultado;
	int N, cont, mdc;
	char sinal;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%d / %d %c %d / %d", &X.numerador, &X.denominador, &sinal, &Y.numerador, &Y.denominador);
		
		//printf("\n\n%c\n\n", sinal);
	
		if(sinal == '+')
		{
			resultado.numerador = (X.numerador * Y.denominador + Y.numerador * X.denominador);;
			resultado.denominador = (X.denominador * Y.denominador);
		}
		else if(sinal == '-')
		{
			resultado.numerador = (X.numerador * Y.denominador - Y.numerador * X.denominador);
			resultado.denominador = (X.denominador * Y.denominador);
		}
		else if(sinal == '*')
		{
			resultado.numerador = (X.numerador * Y.numerador);
			resultado.denominador = (X.denominador * Y.denominador);
		}
		else
		{
			resultado.numerador = (X.numerador * Y.denominador);
			resultado.denominador = (Y.numerador * X.denominador);
		}
		
		mdc =  simplifica(resultado.numerador, resultado.denominador);
		
		printf("%d/%d = %d/%d\n", resultado.numerador, resultado.denominador, resultado.numerador / mdc, resultado.denominador / mdc);
	}
	
	return 0;
}