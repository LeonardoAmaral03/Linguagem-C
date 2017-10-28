#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, cont, cont2, a, f, qtd;
	char e[1010];
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		a = 0;
		f = 0;
		qtd = 0;
		
		scanf("%s", e);
		
		for(cont2 = 0; cont2 < strlen(e); cont2++)
		{
			if(e[cont2] == '<')
				a++;
			else if(e[cont2] == '>')
				f++;
			
			if(f > 0 && a == 0)
				f--;
			
			if(a > 0 && f == 1)
			{
				qtd++;
				f--;
				a--;
			}
		}
		
		printf("%d\n", qtd);
	}
	
	return 0;
}