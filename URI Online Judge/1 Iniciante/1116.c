#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X, Y, N, cont;
	float resultado;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%d %d", &X, &Y);
		
		if(Y == 0)
			printf("divisao impossivel\n");
		else
		{
			resultado = (float)X / Y;
			printf("%.1f\n", resultado);
		}
	}
	
	return 0;
}