#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int V, X[10], cont;
	
	scanf("%d", &V);
	
	for(cont = 0; cont < 10; cont++)
	{
		X[cont] = V;
		V = V * 2;
	}
	
	for(cont = 0; cont < 10; cont++)
		printf("N[%d] = %d\n", cont, X[cont]);
	
	return 0;
}