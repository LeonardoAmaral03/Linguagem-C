#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int X, Y, N, Soma, Cont;
	
	Soma = 0;
	
	scanf("%d", &N);
	
	for(Cont = 0; Cont < N; Cont++)
	{
		scanf("%d%d", &X, &Y);
		
		if(Y > X)
		{
			X++;
			while(X < Y)
			{
				if(X % 2 != 0)
					Soma = X + Soma;
				X++;
			}
		}
		else
		{
			Y++;
			while(Y < X)
			{
				if(Y % 2 != 0)
					Soma = Y + Soma;
				Y++;
			}
		}
		printf("%d\n", Soma);	
		Soma = 0;
	}
	
	return 0;
}