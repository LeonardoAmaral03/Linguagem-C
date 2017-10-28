#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long int valor[100000], valPar[100000], valImpar[100000];

int ordenaPar (const void *p1, const void *p2)
{
	long long int *i = (long long int *)p1;
	long long int *j = (long long int *)p2;
	
	if(*i > *j)
		return 1;
	else
		if(*i == *j)
			return 0;
		else
			return -1;
}

int ordenaImpar (const void *p1, const void *p2)
{
	long long int *i = (long long int *)p1;
	long long int *j = (long long int *)p2;
	
	if(*i > *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}

int main()
{
	long long int N, cont, i = 0, j = 0;

	scanf("%lld", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%lld", &valor[cont]);
	}
	
	for(cont = 0; cont < N; cont++)
	{
		if(valor[cont] % 2 == 0)
		{
			valPar[i] = valor[cont];
			i++;
		}
	}
	
	for(cont = 0; cont < N; cont++)
	{
		if(valor[cont] % 2 != 0)
		{
			valImpar[j] = valor[cont];
			j++;
		}
	}
	
	qsort(valPar, i, sizeof(long long int), ordenaPar);
	
	qsort(valImpar, j, sizeof(long long int), ordenaImpar);
	
	for(cont = 0; cont < i; cont++)
	{
		printf("%lld\n", valPar[cont]);
	}
	
	for(cont = 0; cont < j; cont++)
	{
		printf("%lld\n", valImpar[cont]);
	}
	
	return 0;
}