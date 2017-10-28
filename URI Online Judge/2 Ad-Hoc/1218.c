#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ 
	while(getchar()!='\n');

	return;
}

int main (void)
{
	long long int cont, c, ParIgual, F, M;
	char NumSex[1000000], Numero[2];
	
	cont = 1;
	
	while(scanf("%s", Numero) != EOF)
	{
		LimpaBuffer();
		
		c = 0;
		ParIgual = 0;
		F = 0;
		M = 0;
		
		fgets(NumSex, 1000000, stdin);
		
		while(NumSex[c] >= 32)
		{
			if(NumSex[c] == Numero[0] && NumSex[c + 1] == Numero[1])
			{
				if(NumSex[c + 3] == 'F')
					F = F + 1;
				else
					M = M + 1;
				
				ParIgual = ParIgual + 1;
			}
			
			c = c + 5;
		}
		
		if(cont > 1)
			printf("\n");
		
		printf("Caso %lld:\n", cont);
		printf("Pares Iguais: %lld\n", ParIgual);
		printf("F: %lld\n", F);
		printf("M: %lld\n", M);
		
		cont = cont + 1;
	}
	
	return 0;
}