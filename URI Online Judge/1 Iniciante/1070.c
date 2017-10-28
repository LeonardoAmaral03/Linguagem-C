#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X, cont;
	
	scanf("%d", &X);
	
	for(cont = X; cont < (X + 12); cont++)
	{
		if(cont % 2 != 0)
			printf("%d\n", cont);
	}
	
	return 0;
}