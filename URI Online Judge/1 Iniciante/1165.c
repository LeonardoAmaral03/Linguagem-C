#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long long int N, X, cont, cont2, aux;
	
	scanf("%lld", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		aux = 0;
		scanf("%lld", &X);
		
		for(cont2 = 2; cont2 < X; cont2++)
		{
			if(X % cont2 == 0)
			{
				aux = 1;
				break;
			}
		}
		
		if(aux == 1)
			printf("%lld nao eh primo\n", X);
		else
			printf("%lld eh primo\n", X);
	}
	
	return 0;
}