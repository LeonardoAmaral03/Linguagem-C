#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int C, N, cont;
	char nome[50];
	
	scanf("%d", &C);
	
	for(cont = 0; cont < C; cont++)
	{
		scanf("%s %d", nome, &N);
		if(strcmp(nome, "Thor") == 0)
			printf("Y\n");
		else
			printf("N\n");
	}
	
	return 0;
}