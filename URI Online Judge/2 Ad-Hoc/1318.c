#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, M, X[21000], guarda[11000], cont, cont2, c, b, a;
	
	scanf("%d %d", &N, &M);
	
	while(N != 0 && M != 0)
	{
		a = 0;
		b = 0;
		c = 0;
		
		for(cont = 0; cont < M; cont++)
		{
			scanf("%d", &X[cont]);
			guarda[cont] = 0;
		}
		
		for(cont = 0; cont < (M - 1); cont++)
		{
			for(cont2 = 1; cont2 < M; cont2++)
			{
				if(X[cont] == X[cont2])
				{	
					b = b + 1;
					guarda[c] = X[cont];
					c = c + 1;
				}
			}
		}
		
		printf("\n\n%d\n\n", b);
		
		for(cont2 = 0; cont2 < c; cont2++)
		{
			for(cont = 0; cont < M; cont++)
			{
				if(guarda[cont2] == X[cont])
					a = a + 1;
			}
			if(a > 2)
				b = b - (a - 2);
			a = 0;
		}
		
		printf("%d\n", b);
		scanf("%d %d", &N, &M);
	}
	
	return 0;
}