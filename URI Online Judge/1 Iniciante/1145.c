#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X, Y, cont, cont2, aux = 0;
	
	scanf("%d %d", &X, &Y);
	
	for(cont = 1; cont <= Y; cont++)
	{
		for(cont2 = 0; cont2 < X; cont2++)
		{
			if(cont <= Y)
				printf("%d", cont);
			if(cont2 < (X - 1) && cont <= Y)
				printf(" ");
			if(cont == Y && cont2 < X - 1)
				aux = 1;
			cont++;
		}
		if(aux == 0)
			printf("\n");
		cont--;
	}
	
	return 0;
}