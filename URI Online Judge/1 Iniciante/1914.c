#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {char nome[110], escolha[10];} tpJogadores;

int main()
{
	tpJogadores jogadores[2];
	int qt, cont;
	long int n, m;
	
	scanf("%d", &qt);
	
	for(cont = 0; cont < qt; cont++){
		scanf("%s %s %s %s", jogadores[0].nome, jogadores[0].escolha, jogadores[1].nome, jogadores[1].escolha);
		scanf("%ld %ld", &n, &m);
		
		if((n + m) % 2 == 0){
			if(strcmp(jogadores[0].escolha, "PAR") == 0)
				printf("%s\n", jogadores[0].nome);
			else
				printf("%s\n", jogadores[1].nome);
		}
		else{
			if(strcmp(jogadores[0].escolha, "IMPAR") == 0)
				printf("%s\n", jogadores[0].nome);
			else
				printf("%s\n", jogadores[1].nome);
		}
	}
	
	return 0;
}