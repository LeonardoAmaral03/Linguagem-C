#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct jogos{int indice; char time[25]; int pontos; int vitorias; int gols;};
struct jogos tabela_jogos[10000];

int ordena(const void *p1, const void *p2)
{
	struct jogos *i = (struct jogos *)p1;
	struct jogos *j = (struct jogos *)p2;
	
	if(i->pontos < j->pontos)
		return 1;
	else if(i->pontos == j->pontos)
		if(i->vitorias < j->vitorias)
			return 1;
		else if(i->vitorias == j->vitorias)
			if(i->gols < j->gols)
				return 1;
			else if(i->gols == j->gols)
				if(i->indice < j->indice)
					return -1;
				else if(i->indice == j->indice)
					return 0;
				else
					return 1;
			else
				return -1;
		else
			return -1;
	else
		return -1;
}

int main()
{
	int T, N, M, X, Y, cont, cont2, c, d = 0, e = 0;
	char timeA[25], timeB[25];
	
	scanf("%d", &T);
	
	for(cont = 0; cont < T; cont++)
	{
		scanf("%d %d", &N, &M);
		
		for(cont2 = 0; cont2 < N; cont2++)
		{
			scanf("%s", tabela_jogos[cont2].time);
			tabela_jogos[cont2].indice = cont2;
			tabela_jogos[cont2].gols = 0;
			tabela_jogos[cont2].pontos = 0;
			tabela_jogos[cont2].vitorias = 0;
		}
		
		c = tabela_jogos[N-1].indice;
		
		for(cont2 = 0; cont2 < M; cont2++)
		{
			scanf("%d %s %d %s", &X, timeA, &Y, timeB);
			
			while(d <= c)
			{
				if(strcmp(tabela_jogos[d].time, timeA) == 0)
				{
					tabela_jogos[d].gols = tabela_jogos[d].gols + X;
					if(X > Y)
					{
						tabela_jogos[d].pontos = tabela_jogos[d].pontos + 3;
						tabela_jogos[d].vitorias = tabela_jogos[d].vitorias + 1;
					}
					else if(X == Y)
					{
						tabela_jogos[d].pontos = tabela_jogos[d].pontos + 1;
					}
				}
				d++;
			}
			while(e <= c)
			{
				if(strcmp(tabela_jogos[e].time, timeB) == 0)
				{
					tabela_jogos[e].gols = tabela_jogos[e].gols + Y;
					if(Y > X)
					{
						tabela_jogos[e].pontos = tabela_jogos[e].pontos + 3;
						tabela_jogos[e].vitorias = tabela_jogos[e].vitorias + 1;
					}
					else if(Y == X)
					{
						tabela_jogos[e].pontos = tabela_jogos[e].pontos + 1;
					}
				}
				e++;
			}
			d = 0;
			e = 0;
		}
		
		qsort(tabela_jogos, N, sizeof(struct jogos), ordena);
		
		for(cont2 = 0; cont2 < N; cont2++)
		{
			printf("%s\n", tabela_jogos[cont2].time);
		}
	}

    return 0;
}
