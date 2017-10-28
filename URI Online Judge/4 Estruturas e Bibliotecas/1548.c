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
	int N, M, P[1001], guardaP[1001], cont, cont2, i=0;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%d", &M);
		for(cont2 = 0; cont2 < M; cont2++)
		{
			scanf("%d", &P[cont2]);
			guardaP[cont2] = P[cont2];
		}
		
		qsort(guardaP, M, sizeof(int), ordena);
	
		for(cont2 = 0; cont2 < M; cont2++)
		{
			if(P[cont2] == guardaP[cont2])
				i++;
		}
		printf("%d\n", i);
		i = 0;
	}
	
	return 0;
}