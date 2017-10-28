#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X, Y;
	
	scanf("%d %d", &X, &Y);
	
	while(X != Y)
	{
		if(X > Y)
			printf("Decrescente\n");
		else
			printf("Crescente\n");
		
		scanf("%d %d", &X, &Y);
	}
	
	return 0;
}