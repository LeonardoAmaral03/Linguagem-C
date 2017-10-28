#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X, cont;
	
	scanf("%d", &X);
	
	while(X != 0)
	{
		for(cont = 1; cont <= X; cont++)
		{
			printf("%d", cont);
			
			if(cont != X)
				printf(" ");
		}
		
		scanf("%d", &X);
		
		if(X != 0)
			printf("\n");
	}
	
	printf("\n");
	
	return 0;
}