#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int ordena(const void *p1, const void *p2)
{
	int *i = (int *)p1;
	int *j = (int *)p2;
	
	if(*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}

int main()
{
	int v[3], g[3], cont;
	
	for(cont = 0; cont < 3; cont++)
	{
		scanf("%d", &v[cont]);
		g[cont] = v[cont];
	}
	
	qsort(v, 3, sizeof(int), ordena);
	
	for(cont = 0; cont < 3; cont++)
		printf("%d\n", v[cont]);
	
	printf("\n");
	
	for(cont = 0; cont < 3; cont++)
		printf("%d\n", g[cont]);
	
	return 0;
}