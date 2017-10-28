#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long long int T, N, fib[65], cont;
	
	fib[0] = 0;
	fib[1] = 1;
	
	for(cont = 2; cont < 65; cont++)
		fib[cont] = fib[cont - 1] + fib[cont - 2];
	
	scanf("%lld", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%lld", &T);
		printf("Fib(%lld) = %lld\n", T, fib[T]);
	}
	
	return 0;
}