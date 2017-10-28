#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, X, Y, cont, cont2, soma;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		soma = 0;
		scanf("%d %d", &X, &Y);
		
		if(X % 2 == 0)
			X++;
		
		for(cont2 = 0; cont2 < Y; cont2++)
		{
			soma = soma + X;
			X = X + 2;
		}
		printf("%d\n", soma);
	}
	
	return 0;
}