#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long long int N, cont;
	
	scanf("%lld", &N);
	
	for(cont = 0; cont < N - 1; cont++)
		printf("Ho ");
	
	printf("Ho!\n");
	
	return 0;
}