#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

unsigned long long int fatorial(int);

int main()
{
	int n, m;
	unsigned long long int soma;
	
	while(scanf("%d %d", &n, &m) != EOF){
		soma = fatorial(n) + fatorial(m);
		
		printf("%llu\n", soma);
	}
	
	return 0;
}

unsigned long long int fatorial(int x){
	if(x == 0)
		return 1;
	else
		return fatorial(x - 1) * x;
}