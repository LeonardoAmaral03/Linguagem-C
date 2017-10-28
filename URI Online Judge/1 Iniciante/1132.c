#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, Y, Soma;
	
	Soma = 0;
	
	scanf("%d%d", &X, &Y);
	
	if(X > Y)
		while(Y <= X)
		{
			if(Y % 13 != 0)
				Soma = Y + Soma;
			Y++;
		}
	else
		while(X <= Y)
		{
			if(X % 13 != 0)
				Soma = X + Soma;
			X++;
		}
	printf("%d\n", Soma);
	
	return 0;
}