#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct lista{char telefone[205];};
struct lista lista_telefone[10010];

int ordena(const void *p1, const void *p2)
{
	struct lista *i = (struct lista *)p1;
	struct lista *j = (struct lista *)p2;
	
	return strcmp(i->telefone, j->telefone);
}

int main()
{
	long int N, tam, cont, cont2 = 0, c = 0;
	
	while(scanf("%ld", &N) > EOF)
	{	
		for(cont = 0; cont < N; cont++)
		{
			scanf("%s", lista_telefone[cont].telefone);
		}
		
		qsort(lista_telefone, N, sizeof(struct lista), ordena);
		
		tam = strlen(lista_telefone[0].telefone);
		
		for(cont = 0; cont < N; cont++)
		{	
			while(cont2 < tam && cont < N - 1)
			{
				if(lista_telefone[cont].telefone[cont2] == lista_telefone[cont + 1].telefone[cont2])
				{
					c++;
				}
				else
					cont2 = tam;
				cont2++;
			}
			cont2 = 0;
		}
		printf("%ld\n", c);
		c=0;
	}
	return 0;
}