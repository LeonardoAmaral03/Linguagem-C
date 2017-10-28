#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double val[6], media = 0;
	int cont, np = 0;
	
	for(cont = 0; cont < 6; cont++)
		scanf("%lf", &val[cont]);
	
	for(cont = 0; cont < 6; cont++)
	{
		if(val[cont] > 0)
		{
			np = np + 1;
			media = media + val[cont];
		}
	}
	
	if(np > 0)
		media = media / np;
	
	printf("%d valores positivos\n", np);
	printf("%.1lf\n", media);
	
	return 0;
}