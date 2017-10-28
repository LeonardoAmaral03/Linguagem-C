#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

#define TRUE  1
#define FALSE 0

int main()
{	int N, L, S=0, c, aux, cont, vetor[100];
	char trocas;

	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%d", &L);
		
		for (c = 0; c < L; c++ )
			scanf("%d", &vetor[c]);
		
		do
		{	
			trocas = FALSE;
			c = 0;
			while (c < L - 1)
			{	if (vetor[c] > vetor[c + 1])
				{	aux = vetor[c];
					vetor[c] = vetor[c + 1];
					vetor[c + 1] = aux;
					
					trocas = TRUE;
					S++;
				}
				
				c = c + 1;
			}
		} while (trocas == TRUE);
		
		printf("Optimal train swapping takes %d swaps.\n", S);
		S = 0;
	}

	return 0;
}
