#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont;
	float S = 1.0, aux = 2.0;
	
	for(cont = 3; cont <= 100; cont = cont + 2)
	{
		S = S + (cont / aux);
		aux = aux * 2.0;
	}
	
	printf("%.2f\n", S);
	
	return 0;
}