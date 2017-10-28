#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, a = 1, b = 1, c = 1, cont;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		printf("%d %d %d\n", a, b, c);
		
		b = b + 1;
		c = c + 1;
		
		printf("%d %d %d\n", a, b, c);
		
		a = a + 1;
		b = a * a;
		c = a * b;
	}
	
	return 0;
}