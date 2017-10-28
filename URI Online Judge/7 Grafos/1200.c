#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct regNo
{ 	
	struct regNo *esq;
	int valor;
	struct regNo *dir;
};
typedef struct regNo TNo;

TNo *AchaPai( TNo *r, int n );
void ImprimeArvorePre(TNo *r);
void ImprimeArvoreIn(TNo *r);
void ImprimeArvorePost(TNo *r);
int PesquisaArvore(TNo *r, int n);

int conta = 0, confere;

int main()
{ 
	TNo *raiz = NULL, *aux, *pai;
	int cont;
	char elem[1], opcao[10];
	
	while(scanf("%s", opcao) != EOF)
	{
		confere = 0;
		
		if(strcmp(opcao, "I") == 0)
		{
			scanf(" %c", elem);
			
			for(cont = 65; cont < 123; cont++)
			{
				if(elem[0] == cont)
					break;
			}
			
			aux = (TNo *) malloc( sizeof(TNo) );
			aux->valor = cont;
			aux->dir = NULL;
			aux->esq = NULL;

			/* Fazendo o encadeamento do novo noh */
			pai = AchaPai( raiz, cont );
			if( pai == NULL )
				raiz = aux;
			else
				if( cont <= pai->valor )
					pai->esq = aux;
				else
					pai->dir = aux;
			
			conta = conta + 1;
		}
		else if(strcmp(opcao, "P") == 0)
		{
			scanf("%s", elem);
			
			for(cont = 65; cont < 123; cont++)
			{
				if(elem[0] == cont)
					break;
			}
			
			if(PesquisaArvore(raiz, cont) == 1)
				printf("%s existe\n", elem);
			else
				printf("%s nao existe\n", elem);
		}
		else if(strcmp(opcao, "INFIXA") == 0)
		{
			ImprimeArvoreIn(raiz);
			printf("\n");
		}
		else if(strcmp(opcao, "PREFIXA") == 0)
		{
			ImprimeArvorePre(raiz);
			printf("\n");
		}
		else if(strcmp(opcao, "POSFIXA") == 0)
		{
			ImprimeArvorePost(raiz);
			printf("\n");
		}
	}
	
	return 0;
}

TNo *AchaPai( TNo *r, int n )
{ 
	if( r == NULL )
		return NULL;
	else
		if( n <= r->valor )
			/* n é descendente do lado esquerdo de r */
			if( r->esq == NULL )
				return r;
			else
				return AchaPai( r->esq, n );
		else
			/* n é descendente do lado direito de r */
			if( r->dir == NULL )
				return r;
			else
				return AchaPai( r->dir, n );
}

void ImprimeArvorePre(TNo *r)
{
	if( r != NULL )
	{
		printf("%c", r->valor);
		if(confere < conta - 1)
		{
			printf(" ");
			confere = confere + 1;
		}
		ImprimeArvorePre(r->esq);
		ImprimeArvorePre(r->dir);
	}
}

void ImprimeArvoreIn(TNo *r)
{
	if( r != NULL )
	{
		ImprimeArvoreIn(r->esq);
		printf("%c", r->valor);
		if(confere < conta - 1)
		{
			printf(" ");
			confere = confere + 1;
		}
		ImprimeArvoreIn(r->dir);
	}
}

void ImprimeArvorePost(TNo *r)
{
	if( r != NULL )
	{
		ImprimeArvorePost(r->esq);
		ImprimeArvorePost(r->dir);
		printf("%c", r->valor);
		if(confere < conta - 1)
		{
			printf(" ");
			confere = confere + 1;
		}
	}
}

int PesquisaArvore(TNo *r, int n)
{
	if(r != NULL)
	{
		if(r->valor == n)
			return 1;
		else if(r->valor < n)
			return PesquisaArvore(r->dir, n);
		else if(r->valor > n)
			return PesquisaArvore(r->esq, n);
	}
	else
		return 0;
}