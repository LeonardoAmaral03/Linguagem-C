#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N[20], cont, aux;
	
	for(cont = 0; cont < 20; cont++)
		scanf("%d", &N[cont]);
	
	for(cont = 0; cont < 10; cont++)
	{
		aux = N[cont];
		N[cont] = N[19 - cont];
		N[19 - cont] = aux;
	}
	
	for(cont = 0; cont < 20; cont++)
		printf("N[%d] = %d\n", cont, N[cont]);
	
	return 0;
}