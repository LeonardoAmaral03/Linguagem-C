#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont;
	float nota[2], media;
	
	for(cont = 0; cont < 2; cont++)
	{
		scanf("%f", &nota[cont]);
		
		while(nota[cont] < 0 || nota[cont] > 10.0)
		{
			printf("nota invalida\n");
			
			scanf("%f", &nota[cont]);
		}
	}
	
	media = (nota[0] + nota[1]) / 2;
	
	printf("media = %.2f\n", media);
	
	return 0;
}