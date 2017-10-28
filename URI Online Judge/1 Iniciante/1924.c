#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LimpaBuffer()
{ 
	while(getchar()!='\n');

	return;
}

int main()
{
	int N, cont;
	char curso[110];
	
	scanf("%d", &N);
	LimpaBuffer();
	
	for(cont = 0; cont < N; cont++)
		fgets(curso, 110, stdin);
	
	printf("Ciencia da Computacao\n");
	
	return 0;
}