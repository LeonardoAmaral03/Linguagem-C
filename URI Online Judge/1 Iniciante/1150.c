#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X, Z, cont = 0, soma = 0;
	
	scanf("%d", &X);
	
	do
		scanf("%d", &Z);
	while(Z <= X);
	
	while(cont < Z)
	{
		soma = soma + 1;
		cont = cont + X;
		X++;
	}
	
	printf("%d\n", soma);
	
	return 0;
}