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

int main()
{
	TNo *raiz, *aux, *pai;
	int numero, C, cont, N, cont2, caso = 1;
	
	scanf("%d", &C);
	
	for(cont = 0; cont < C; cont++)
	{
		raiz = NULL;
		
		scanf("%d", &N);
		
		for(cont2 = 0; cont2 < N; cont2++)
		{
			scanf("%d", &numero);
			
			aux = (TNo *) malloc( sizeof(TNo) );
			aux->valor = numero;
			aux->dir = NULL;
			aux->esq = NULL;
			
			/* Fazendo o encadeamento do novo noh */
			pai = AchaPai( raiz, numero );
			if( pai == NULL )
				raiz = aux;
			else
				if( numero <= pai->valor )
					pai->esq = aux;
				else
					pai->dir = aux;
		}
		
		printf("Case %d:\n", caso);
		
		printf("Pre.:");
		ImprimeArvorePre(raiz);
		printf("\n");
		
		printf("In..:");
		ImprimeArvoreIn(raiz);
		printf("\n");
		
		printf("Post:");
		ImprimeArvorePost(raiz);
		printf("\n\n");
		
		caso++;
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
		printf(" %d", r->valor);
		ImprimeArvorePre(r->esq);
		ImprimeArvorePre(r->dir);
	}
}

void ImprimeArvoreIn(TNo *r)
{
	if( r != NULL )
	{
		ImprimeArvoreIn(r->esq);
		printf(" %d", r->valor);
		ImprimeArvoreIn(r->dir);
	}
}

void ImprimeArvorePost(TNo *r)
{
	if( r != NULL )
	{
		ImprimeArvorePost(r->esq);
		ImprimeArvorePost(r->dir);
		printf(" %d", r->valor);
	}
}