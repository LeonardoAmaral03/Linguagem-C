#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct regNo
{ 	
	struct regNo *esq;
	long long int valor;
	struct regNo *dir;
};
typedef struct regNo TNo;

TNo *AchaPai( TNo *r, long long int n );
void ImprimeArvorePre(TNo *r);
void ImprimeArvoreIn(TNo *r);
void ImprimeArvorePost(TNo *r);
int PesquisaArvore(TNo *r, long long int n);
TNo *MDireita(TNo **no);
void ExcluirNo(TNo **r, long long int n);

long long int confere;

int main()
{ 
	TNo *raiz = NULL, *aux, *pai;
	long long int elem;
	char opcao[10];
	
	while(scanf("%s", opcao) != EOF)
	{
		confere = 0;
		
		if(strcmp(opcao, "I") == 0)
		{
			scanf("%lld", &elem);
			
			aux = (TNo *) malloc( sizeof(TNo) );
			aux->valor = elem;
			aux->dir = NULL;
			aux->esq = NULL;

			/* Fazendo o encadeamento do novo noh */
			pai = AchaPai( raiz, elem );
			if( pai == NULL )
				raiz = aux;
			else
				if( elem <= pai->valor )
					pai->esq = aux;
				else
					pai->dir = aux;
		}
		else if(strcmp(opcao, "P") == 0)
		{
			scanf("%lld", &elem);
			
			if(PesquisaArvore(raiz, elem) == 1)
				printf("%lld existe\n", elem);
			else
				printf("%lld nao existe\n", elem);
		}
		else if(strcmp(opcao, "R") == 0)
		{
			scanf("%lld", &elem);
			
			ExcluirNo(&raiz, elem);
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

TNo *AchaPai( TNo *r, long long int n )
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
		if(confere == 1)
			printf(" %lld", r->valor);
		else
		{
			printf("%lld", r->valor);
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
		if(confere == 1)
			printf(" %lld", r->valor);
		else
		{
			printf("%lld", r->valor);
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
		if(confere == 1)
			printf(" %lld", r->valor);
		else
		{
			printf("%lld", r->valor);
			confere = confere + 1;
		}
	}
}

int PesquisaArvore(TNo *r, long long int n)
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

TNo *MDireita(TNo **no)
{
    if((*no)->dir != NULL)
		return MDireita(&(*no)->dir);
    else
	{
		TNo *aux = *no;
		
		if((*no)->esq != NULL) 
			*no = (*no)->esq;
		else
			*no = NULL;
		
		return aux;
	}
}

void ExcluirNo(TNo **r, long long int n)
{
	TNo *pAux;
	
    if(*r == NULL)
	{ 
       return;
    }
    if(n < (*r)->valor)
       ExcluirNo(&(*r)->esq, n);
    else
	{
		if(n > (*r)->valor)
			ExcluirNo(&(*r)->dir, n);
		else
		{    
			pAux = *r;
			if (((*r)->esq == NULL) && ((*r)->dir == NULL))
			{        
				free(pAux);
				(*r) = NULL;
			}
			else
			{     
				if((*r)->esq == NULL)
				{
					(*r) = (*r)->dir;
					pAux->dir = NULL;
					free(pAux); pAux = NULL;
				}
				else
				{           
					if ((*r)->dir == NULL)
					{
						(*r) = (*r)->esq;
						pAux->esq = NULL;
						free(pAux);
						pAux = NULL;
                    }
					else
					{       
						pAux = MDireita(&(*r)->esq);
						pAux->esq = (*r)->esq;
						pAux->dir = (*r)->dir;
						(*r)->esq = (*r)->dir = NULL;
						free((*r));
						*r = pAux;
						pAux = NULL;
					}
                }
			}
		}
	}
}