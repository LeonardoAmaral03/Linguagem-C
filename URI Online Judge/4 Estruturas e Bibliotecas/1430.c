#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char composicao[205];
	int acertos, tamanho, cont;
	float conta;
	
	scanf("%s", &composicao);
	
	while(composicao[0] != '*')
	{
		conta = 0;
		acertos = 0;
		
		tamanho = strlen(composicao);
		
		for(cont = 1; cont < (tamanho - 1); cont++)
		{
			while(composicao[cont] != '/')
			{
				if(composicao[cont] == 'W')
					conta = conta + 1.0;
				else if(composicao[cont] == 'H')
					conta = conta + (1.0/2);
				else if(composicao[cont] == 'Q')
					conta = conta + (1.0/4);
				else if(composicao[cont] == 'E')
					conta = conta + (1.0/8);
				else if(composicao[cont] == 'S')
					conta = conta + (1.0/16);
				else if(composicao[cont] == 'T')
					conta = conta + (1.0/32);
				else if(composicao[cont] == 'X')
					conta = conta + (1.0/64);
				cont++;
			}
			if(conta == 1)
				acertos = acertos + 1;
			conta = 0;
		}
		printf("%d\n", acertos);
		
		scanf("%s", &composicao);
	}
	
	return 0;
}