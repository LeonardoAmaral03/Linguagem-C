#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int ordena(const void *p1, const void *p2)
{
	int *i = (int *)p1;
	int *j = (int *)p2;
	
	if(*i < *j)
		return 1;
	else
		if(*i == *j)
			return 0;
		else
			return -1;
}

int main()
{
	int X[100], aux[100], cont;
	
	for(cont = 0; cont < 100; cont++)
	{	
		scanf("%d", &X[cont]);
		aux[cont] = X[cont];
	}
	
	qsort(aux, 100, sizeof(int), ordena);
	
	cont = 0;
	
	while(aux[0] != X[cont])
		cont++;
	
	printf("%d\n", aux[0]);
	printf("%d\n", cont + 1);
	
	return 0;
}