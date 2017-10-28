#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont, N, soma = 0, aux = 0, aux2 = 1;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		printf("%d", soma);
		soma = aux + aux2;
		aux2 = aux;
		aux = soma;
		
		if(cont < N - 1)
			printf(" ");
	}
	
	printf("\n");
	
	return 0;
}