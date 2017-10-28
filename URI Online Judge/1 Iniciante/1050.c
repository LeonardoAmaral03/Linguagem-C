#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

int main()
{
	int DDD;
	
	scanf("%d", &DDD);
	
	if(DDD != 61)
		if(DDD != 71)
			if(DDD != 11)
				if(DDD != 21)
					if(DDD != 32)
						if(DDD != 19)
							if(DDD != 27)
								if(DDD != 31)
									printf("DDD nao cadastrado\n");
								else
									printf("Belo Horizonte\n");
							else
								printf("Vitoria\n");
						else
							printf("Campinas\n");
					else
						printf("Juiz de Fora\n");
				else
					printf("Rio de Janeiro\n");
			else
				printf("Sao Paulo\n");
		else
			printf("Salvador\n");
	else
		printf("Brasilia\n");
	
	return 0;
}