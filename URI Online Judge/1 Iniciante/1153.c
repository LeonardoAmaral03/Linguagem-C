#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, fatorial, cont;
	
	scanf("%d", &N);
	
	fatorial = N;
	
	for(cont = N; cont > 1; cont--)
		fatorial = fatorial * (cont - 1);
	
	printf("%d\n", fatorial);
	
	return 0;
}