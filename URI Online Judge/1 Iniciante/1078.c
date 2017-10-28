#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, cont;
	
	scanf("%d", &N);
	
	for(cont = 1; cont < 11; cont++)
		printf("%d x %d = %d\n", cont, N, cont * N);
	
	return 0;
}