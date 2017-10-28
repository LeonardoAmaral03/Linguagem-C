#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X, cont, soma;
	
	scanf("%d", &X);
	
	while(X != 0)
	{
		soma = 0;
		if(X % 2 != 0)
			X++;
		for(cont = 0; cont < 5; cont++)
		{
			soma = soma + X;
			X = X + 2;
		}
		
		printf("%d\n", soma);
		
		scanf("%d", &X);
	}
	
	return 0;
}