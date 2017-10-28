#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont;
	
	for(cont = 1; cont < 101; cont++)
	{
		if(cont % 2 == 0)
			printf("%d\n", cont);
	}
	
	return 0;
}