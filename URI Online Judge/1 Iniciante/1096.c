#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont;
	
	for(cont = 1; cont < 10; cont = cont + 2)
	{
		printf("I=%d J=7\n", cont);
		printf("I=%d J=6\n", cont);
		printf("I=%d J=5\n", cont);
	}
	
	return 0;
}