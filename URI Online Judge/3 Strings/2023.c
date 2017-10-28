#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct nomes {char nome[90], nomeoriginal[90];};
typedef struct nomes tpNomes;

int ordenaNome(const void *p1, const void *p2);

int main()
{
	tpNomes tabNomes[1010];
	int cont = 0, cont2, tam;
	
	while(fgets(tabNomes[cont].nome, 90, stdin) != NULL){
		for(cont2 = 0; tabNomes[cont].nome[cont2] >= ' '; cont2++);
		tabNomes[cont].nome[cont2] = '\0';
		
		strcpy(tabNomes[cont].nomeoriginal, tabNomes[cont].nome);
		
		tam = strlen(tabNomes[cont].nome);
		
		for(cont2 = 0; cont2 < tam; cont2++){
			tabNomes[cont].nome[cont2] = tolower(tabNomes[cont].nome[cont2]);
		}
		
		cont++;
	}
	
	qsort(tabNomes, cont, sizeof(tpNomes), ordenaNome);
	
	printf("%s\n", tabNomes[cont-1].nomeoriginal);
	
	return 0;
}

int ordenaNome(const void *p1, const void *p2){
	tpNomes *i = (tpNomes *)p1;
	tpNomes *j = (tpNomes *)p2;
	
	return strcmp(i->nome, j->nome);
}