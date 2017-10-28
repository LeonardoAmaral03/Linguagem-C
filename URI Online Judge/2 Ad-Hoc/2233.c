#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long long int R, G, B, total;
	
	scanf("%llx", &R);
	scanf("%llx", &G);
	scanf("%llx", &B);
	
	if(R >= G && G >= B)
		total = 1 + ((R / G) * (R / G)) + ((R / G) * (R / G)) * ((G / B) * (G / B));
	else if(R >= G && G < B)
		total = 1 + ((R / G) * (R / G));
	else
		total = 1;
	
	printf("%llx\n", total);
	
	return 0;
}