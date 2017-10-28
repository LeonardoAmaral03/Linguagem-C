#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, X, Soma, Cont, Aux;
	
	Aux = 1;
	
	scanf("%d", &N);
	
	for(Cont = 0; Cont < N; Cont++)
	{
		Soma = 0;
		
		scanf("%d", &X);
		
		for(Aux = 1; Aux < X; Aux++)
			if(X % Aux == 0)
				Soma = Aux + Soma;
		
		if(Soma == X)
			printf("%d eh perfeito\n", X);
		else
			printf("%d nao eh perfeito\n", X);
	}
	
	return 0;
}