#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	unsigned int N, L, P;
	
	scanf("%u%u", &N, &L);
	
	P = N * L;
	
	printf("%u\n", P);
	
	return 0;
}