#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Alunos {char nome[100], cor[10], tamanho[3];};
typedef struct Alunos Talunos;

void LimpaBuffer()
{ 
	while(getchar()!='\n');

	return;
}

int ordenacor(const void *p1, const void *p2)
{
	Talunos *i = (Talunos *)p1;
	Talunos *j = (Talunos *)p2;
	
	return strcmp(i->cor, j->cor);
}

int ordenatamanho(const void *p1, const void *p2)
{
	Talunos *i = (Talunos *)p1;
	Talunos *j = (Talunos *)p2;
	
	return strcmp(j->tamanho, i->tamanho);
}

int ordenanome(const void *p1, const void *p2)
{
	Talunos *i = (Talunos *)p1;
	Talunos *j = (Talunos *)p2;
	
	return strcmp(i->nome, j->nome);
}

int main()
{
	Talunos TabAlunos[65];
	int N, cont, b, v, p, m, g;
	
	scanf("%d", &N);
	
	while(N != 0)
	{
		b = 0;
		v = 0;
		
		for(cont = 0; cont < N; cont++)
		{
			LimpaBuffer();
			fgets(TabAlunos[cont].nome, 100, stdin);
			scanf("%s %s", TabAlunos[cont].cor, TabAlunos[cont].tamanho);
		}
		
		qsort(TabAlunos, N, sizeof(Talunos), ordenacor);
		
		for(cont = 0; cont < N; cont++)
		{
			if(strcmp(TabAlunos[cont].cor, "branco") == 0)
				b = b + 1;
		}
		
		v = N-b;
		
		qsort(TabAlunos, b, sizeof(Talunos), ordenatamanho);
		
		p = 0;
		m = 0;
		g = 0;
		
		for(cont = 0; cont < b; cont++)
		{
			if(strcmp(TabAlunos[cont].tamanho, "P") == 0)
				p = p + 1;
			else if(strcmp(TabAlunos[cont].tamanho, "M") == 0)
				m = m + 1;
			else if(strcmp(TabAlunos[cont].tamanho, "G") == 0)
				g = g + 1;
		}
		
		qsort(&TabAlunos[0], p, sizeof(Talunos), ordenanome);
		qsort(&TabAlunos[p], m, sizeof(Talunos), ordenanome);
		qsort(&TabAlunos[p+m], g, sizeof(Talunos), ordenanome);
		
		qsort(&TabAlunos[b], v, sizeof(Talunos), ordenatamanho); //por vermelho
		
		p = 0;
		m = 0;
		g = 0;
		
		for(cont = b; cont < N; cont++)
		{
			if(strcmp(TabAlunos[cont].tamanho, "P") == 0)
				p = p + 1;
			else if(strcmp(TabAlunos[cont].tamanho, "M") == 0)
				m = m + 1;
			else if(strcmp(TabAlunos[cont].tamanho, "G") == 0)
				g = g + 1;
		}
		
		qsort(&TabAlunos[b], p, sizeof(Talunos), ordenanome);
		qsort(&TabAlunos[b+p], m, sizeof(Talunos), ordenanome);
		qsort(&TabAlunos[b+p+m], g, sizeof(Talunos), ordenanome);
		
		for(cont = 0; cont < N; cont++)
		{
			printf("%s %s %s", TabAlunos[cont].cor, TabAlunos[cont].tamanho, TabAlunos[cont].nome);
		}
		
		scanf("%d", &N);
		
		if(N > 0)
			printf("\n");
	}
	
	return 0;
}