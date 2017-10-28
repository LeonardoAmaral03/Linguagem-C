#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int I, J;
	
	I = 1;
	
	for(J = 60; J >= 0; J = J - 5)
	{
		printf("I=%d J=%d\n", I , J);
		I = I + 3;
	}
	
	return 0;
}