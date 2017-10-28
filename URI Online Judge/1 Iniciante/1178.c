#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double X, N[110];
	int cont;
	
	scanf("%lf", &X);
	
	N[0] = X;
	
	for(cont = 1; cont < 100; cont++)
		N[cont] = N[cont - 1] / 2.0;
	
	for(cont = 0; cont < 100; cont++)
		printf("N[%d] = %.4lf\n", cont, N[cont]);
	
	return 0;
}