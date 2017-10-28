#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, a = 1, b = 2, c = 3, cont;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		printf("%d %d %d PUM\n", a, b, c);
		
		a = a + 4;
		b = b + 4;
		c = c + 4;
	}
	
	return 0;
}