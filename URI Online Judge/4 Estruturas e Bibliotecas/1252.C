#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct dados{long int valor; int Mod;};
struct dados TbDados[10001];
long int Par[10001];
long int Impar[10001];

int ordena(const void *p1, const void *p2)
{
	struct dados *i = (struct dados*)p1;
	struct dados *j = (struct dados*)p2;
	
	if(i->Mod < j->Mod)
		return -1;
	else
		if(i->Mod == j->Mod)
			return 0;
		else
			return 1;
}

int ordenaPar(const void *p1, const void *p2)
{
	long int *i = (long int*)p1;
	long int *j = (long int*)p2;
	
	if(*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}

int ordenaImpar(const void *p1, const void *p2)
{
	long int *i = (long int*)p1;
	long int *j = (long int*)p2;
	
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
	int N, M, cont, cont2, p=0, i=0, c, d;
	
	scanf("%d %d", &N, &M);
	
	printf("%d %d\n", N, M);
	
	while(N != 0 && M != 0)
	{
		for(cont = 0; cont < N; cont++)
		{
			scanf("%ld", &TbDados[cont].valor);
			TbDados[cont].Mod = TbDados[cont].valor % M;
		}
		
		qsort(TbDados, N, sizeof(struct dados), ordena);
		
		c = TbDados[0].Mod;
		d = TbDados[N-1].Mod;
		cont = 0;
		
		while(c <= d)
		{
			while(TbDados[cont].Mod == c)
			{
				if(TbDados[cont].valor % 2 == 0)
				{
					Par[p] = TbDados[cont].valor;
					p++;
				}
				else
				{
					Impar[i] = TbDados[cont].valor;
					i++;
				}
				
				cont++;
				
				if(TbDados[cont].Mod != c || cont == N)
					break;
			}
		
			qsort(Par, p, sizeof(long int), ordenaPar);
			qsort(Impar, i, sizeof(long int), ordenaImpar);
			
			for(cont2 = 0; cont2 < i; cont2++)
			{
				printf("%ld\n", Impar[cont2]);
			}
			
			for(cont2 = 0; cont2 < p; cont2++)
			{
				printf("%ld\n", Par[cont2]);
			}
			
			p=0;
			i=0;
			c++;
		}

		scanf("%d %d", &N, &M);
	
		printf("%d %d\n", N, M);
	}
	
	return 0;
}