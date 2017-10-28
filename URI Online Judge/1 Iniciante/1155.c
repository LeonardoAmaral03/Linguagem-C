#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont;
	float S = 1;
	
	for(cont = 2; cont <= 100; cont++)
		S = S + (1.0 / cont);
	
	printf("%.2f\n", S);
	
	return 0;
}