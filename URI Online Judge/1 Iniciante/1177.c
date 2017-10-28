#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int T, N[1005], cont, cont2;
	
	scanf("%d", &T);
	
	for(cont = 0; cont < 1000; cont++)
	{
		for(cont2 = 0; cont2 < T; cont2++)
		{
			N[cont] = cont2;
			cont++;
		}
		cont--;
	}
	
	for(cont = 0; cont < 1000; cont++)
		printf("N[%d] = %d\n", cont, N[cont]);
	
	return 0;
}