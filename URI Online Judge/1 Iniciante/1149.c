#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int A, N, cont, soma = 0;
	
	scanf("%d %d", &A, &N);
	
	while(N <= 0)
		scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		soma = soma + (A + cont);
	}
	
	printf("%d\n", soma);
	
	return 0;
}