#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct renas{char nome[105]; int peso; int idade; float altura;};
struct renas tabela_renas[100010];

int ordena(const void *p1, const void *p2)
{
	struct renas *i = (struct renas *)p1;
	struct renas *j = (struct renas *)p2;
	
	if(i->peso < j->peso)
		return 1;
	else if(i->peso == j->peso)
			if(i->idade < j->idade)
				return -1;
			else if(i->idade == j->idade)
					if(i->altura < j->altura)
						return -1;
					else if(i->altura == j->altura)
						return strcmp(i->nome, j->nome);
					else
						return 1;
			else
				return 1;
	else
		return -1;
}

int main()
{
	long int T, N, M, cont, cont2;
	
	scanf("%ld", &T);
	
	for(cont = 0; cont < T; cont++)
	{
		scanf("%ld %ld", &N, &M);
		
		for(cont2 = 0; cont2 < N; cont2++)
		{
			scanf("%s %d %d %f", tabela_renas[cont2].nome, &tabela_renas[cont2].peso, &tabela_renas[cont2].idade, &tabela_renas[cont2].altura);
		}
		
		qsort(tabela_renas, N, sizeof(struct renas), ordena);
		
		printf("CENARIO {%ld}\n", cont + 1);
		
		for(cont2 = 0; cont2 < M; cont2++)
		{
			printf("%ld - %s\n", cont2 + 1, tabela_renas[cont2].nome);
		}
	}
	
	return 0;
}