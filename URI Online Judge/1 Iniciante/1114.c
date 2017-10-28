#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int senha;
	
	scanf("%d", &senha);
	
	while(senha != 2002)
	{
		printf("Senha Invalida\n");
		scanf("%d", &senha);
	}
	
	printf("Acesso Permitido\n");
	
	return 0;
}