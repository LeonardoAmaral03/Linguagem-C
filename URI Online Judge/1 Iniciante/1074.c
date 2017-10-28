#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long long int N, X[10000], cont;
	
	scanf("%lld", &N);
	
	for(cont = 0; cont < N; cont++)
		scanf("%lld", &X[cont]);
	
	for(cont = 0; cont < N; cont++)
	{
		if(X[cont] == 0)
			printf("NULL\n");
		else if(X[cont] > 0 && X[cont] % 2 == 0)
			printf("EVEN POSITIVE\n");
		else if(X[cont] > 0 && X[cont] % 2 != 0)
			printf("ODD POSITIVE\n");
		else if(X[cont] < 0 && X[cont] % 2 == 0)
			printf("EVEN NEGATIVE\n");
		else if(X[cont] < 0 && X[cont] % 2 != 0)
			printf("ODD NEGATIVE\n");
	}
	
	return 0;
}