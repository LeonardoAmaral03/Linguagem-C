#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, M, Soma, Cont;
	
	Soma = 0;
	
	scanf("%d%d", &N, &M);
	
	while(M && N > 0)
	{
		if(M > N)
		{
			while(N <= M)
			{
				Soma = N + Soma;
				printf("%d ", N);
				N++;
			}
		}
		else
		{
			while(M <= N)
			{
				Soma = M + Soma;
				printf("%d ", M);
				M++;
			}
		}
		printf("Sum=%d\n", Soma);
		
		Soma = 0;
		
		scanf("%d%d", &N, &M);
	}
	
	return 0;
}