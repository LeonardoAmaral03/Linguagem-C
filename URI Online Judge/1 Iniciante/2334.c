#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	unsigned long long int p;
	
	scanf("%llu", &p);
	
	while(p != -1){
		if(p == 0)
			printf("%llu\n", p);
		else
			printf("%llu\n", p - 1);
		
		scanf("%llu", &p);
	}
	
	return 0;
}