#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X, Y, aux, cont;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if(X > Y)
	{
		aux = X;
		X = Y;
		Y = aux;
	}
	
	for(cont = X + 1; cont < Y; cont++)
	{
		if(cont % 5 == 2 || cont % 5 == 3)
			printf("%d\n", cont);
	}
	
	return 0;
}