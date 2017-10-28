#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X[10], cont;
	
	for(cont = 0; cont < 10; cont++)
		scanf("%d", &X[cont]);
	
	for(cont = 0; cont < 10; cont++)
	{
		if(X[cont] <= 0)
			X[cont] = 1;
	}
	
	for(cont = 0; cont < 10; cont++)
		printf("X[%d] = %d\n", cont, X[cont]);
	
	return 0;
}