#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont;
	
	for(cont = 0; cont < 22; cont = cont + 2)
	{
		if(cont == 0 || cont == 10 || cont == 20)
		{
			printf("I=%.0f J=%.0f\n", cont / 10.0, (cont + 10) / 10.0);
			printf("I=%.0f J=%.0f\n", cont / 10.0, (cont + 20) / 10.0);
			printf("I=%.0f J=%.0f\n", cont / 10.0, (cont + 30) / 10.0);
		}
		else
		{
			printf("I=%.1f J=%.1f\n", cont / 10.0, (cont + 10) / 10.0);
			printf("I=%.1f J=%.1f\n", cont / 10.0, (cont + 20) / 10.0);
			printf("I=%.1f J=%.1f\n", cont / 10.0, (cont + 30) / 10.0);
		}
	}
	
	return 0;
}