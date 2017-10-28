#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int esc, A = 0, G = 0, D = 0;
	
	do
		scanf("%d", &esc);
	while(esc < 1 && esc > 4);
	
	while(esc != 4)
	{
		if(esc == 1)
			A++;
		else if(esc == 2)
			G++;
		else if(esc == 3)
			D++;
		
		do
			scanf("%d", &esc);
		while(esc < 1 && esc > 4);
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", A);
	printf("Gasolina: %d\n", G);
	printf("Diesel: %d\n", D);
	
	return 0;
}