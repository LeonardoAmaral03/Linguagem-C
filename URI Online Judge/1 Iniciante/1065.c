#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int val[5], cont, np = 0;
	
	for(cont = 0; cont < 5; cont++)
		scanf("%d", &val[cont]);
	
	for(cont = 0; cont < 5; cont++)
	{
		if(val[cont] % 2 == 0)
			np = np + 1;
	}
	
	printf("%d valores pares\n", np);
	
	return 0;
}