#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, X[10000], cont, numin = 0, numout = 0;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
		scanf("%d", &X[cont]);
	
	for(cont = 0; cont < N; cont++)
	{
		if(X[cont] >= 10 && X[cont] <= 20)
			numin = numin + 1;
		else
			numout = numout + 1;
	}
	
	printf("%d in\n", numin);
	printf("%d out\n", numout);
	
	return 0;
}