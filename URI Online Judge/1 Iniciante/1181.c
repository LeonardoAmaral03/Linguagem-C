#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int linha, cont, cont2;
	double val[12][12], soma, media;
	char op[1];
	
	soma = 0;
	media = 0;
	
	scanf("%d", &linha);
	scanf(" %c", op);
	
	for(cont = 0; cont < 12; cont++)
		for(cont2 = 0; cont2 < 12; cont2++)
			scanf("%lf", &val[cont][cont2]);
		
	if(op[0] == 'S')
	{
		for(cont = linha; cont == linha; cont++)
			for(cont2 = 0; cont2 < 12; cont2++)
				soma = soma + val[cont][cont2];
		
		printf("%.1lf\n", soma);
	}
	else
	{
		for(cont = linha; cont == linha; cont++)
			for(cont2 = 0; cont2 < 12; cont2++)
				soma = soma + val[cont][cont2];
		
		media = soma / 12;
		
		printf("%.1lf\n", media);
	}
	return 0;
}