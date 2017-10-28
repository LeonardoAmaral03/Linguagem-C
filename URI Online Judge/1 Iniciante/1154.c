#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int idade, cont = 0;
	float media = 0;
	
	scanf("%d", &idade);
	
	while(idade >= 0)
	{
		media = media + idade;
		cont = cont + 1;
		
		scanf("%d", &idade);
	}
	
	media = media / cont;
	
	printf("%.2f\n", media);
	
	return 0;
}