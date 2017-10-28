#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont;
	float A[100];
	
	for(cont = 0; cont < 100; cont++)
		scanf("%f", &A[cont]);
	
	for(cont = 0; cont < 100; cont++)
	{
		if(A[cont] <= 10)
			printf("A[%d] = %.1f\n", cont, A[cont]);
	}
	
	return 0;
}