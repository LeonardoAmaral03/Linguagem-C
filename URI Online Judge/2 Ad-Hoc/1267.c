#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, D, X[600][200], cont, cont2, resp;
	
	scanf("%d %d", &N, &D);
	
	while(N != 0 && D != 0)
	{
		resp = 0;
		
		for(cont = 0; cont < D; cont++)
		{
			for(cont2 = 0; cont2 < N; cont2++)
			{
				scanf("%d", &X[cont][cont2]);
			}
		}
		
		if(D == 1)
		{
			for(cont2 = 0; cont2 < N; cont2++)
			{
				if(X[0][cont2] == 1)
				{
					printf("yes\n");
					resp = 1;
					break;
				}
			}
			if(resp != 1)
				printf("no\n");
		}
		else
		{
			resp = 0;
			
			for(cont2 = 0; cont2 < N; cont2++)
			{
				for(cont = 0; cont < (D - 1); cont++)
				{
					if(X[cont][cont2] == X[cont + 1][cont2] && X[cont][cont2] == 1)
						resp = 1;
					else
					{
						resp = 0;
						break;
					}
				}
				
				if(resp == 1)
				{
					printf("yes\n");
					break;
				}
			}
			
			if(resp == 0)
				printf("no\n");
		}
		
		scanf("%d %d", &N, &D);
	}
	
	return 0;
}