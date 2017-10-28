#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int call = 0, fib;

int fibonacci(int X)
{	if(X == 0)
		return 0;
	else if (X == 1)
		return 1;
	else
	{
		call = call + 1;
		return fibonacci(X - 1) + fibonacci(X - 2);
	}
}


int main()
{
	int N, X, cont;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%d", &X);
		
		
		printf("fib(%d) = %d calls = %d\n", X, call * 2, fibonacci(X));
		
		call = 0;
	}
	
	return 0;
}