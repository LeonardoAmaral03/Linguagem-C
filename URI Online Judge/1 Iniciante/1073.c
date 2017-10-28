#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, cont, aux;
	
	scanf("%d", &N);
	
	for(cont = 1; cont < (N + 1); cont++)
	{
		if(cont % 2 == 0)
		{
			aux = pow(cont, 2);
			printf("%d^2 = %d\n", cont, aux);
		}
	}
	return 0;
}