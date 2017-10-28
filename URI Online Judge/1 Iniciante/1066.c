#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int val[5], cont, npar = 0, nimpar = 0, npositivo = 0, nnegativo = 0;
	
	for(cont = 0; cont < 5; cont++)
		scanf("%d", &val[cont]);
	
	for(cont = 0; cont < 5; cont++)
	{
		if(val[cont] % 2 == 0)
			npar = npar + 1;
		else
			nimpar = nimpar + 1;
		
		if(val[cont] > 0)
			npositivo = npositivo + 1;
		else if(val[cont] < 0)
			nnegativo = nnegativo + 1;
	}
	
	printf("%d valor(es) par(es)\n", npar);
	printf("%d valor(es) impar(es)\n", nimpar);
	printf("%d valor(es) positivo(s)\n", npositivo);
	printf("%d valor(es) negativo(s)\n", nnegativo);
	
	return 0;
}