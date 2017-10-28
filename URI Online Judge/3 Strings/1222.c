#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct conto{char palavra[80]; int tam;};
typedef struct conto tpConto;

int main()
{
	int N, L, C, nC, nL, nP, cont;
	tpConto tblConto[1100];
	
	while(scanf("%d %d %d", &N, &L, &C) != EOF)
	{
		nC = 0;
		nL = 1;
		nP = 1;
		
		for(cont = 0; cont < N; cont++)
		{
			scanf("%s", tblConto[cont].palavra);
			tblConto[cont].tam = strlen(tblConto[cont].palavra);
		}
		
		for(cont = 0; cont < N; cont++)
		{
			nC = nC + tblConto[cont].tam;
			
			if(nC > C)
			{
				nL++;
				nC = 0;
				cont--;
			}
			else
				nC++;
			
			if(nL > L)
			{
				nP++;
				nL = 1;
			}
		}
		
		printf("%d\n", nP);
	}
	
	return 0;
}