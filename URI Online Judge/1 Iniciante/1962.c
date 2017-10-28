#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	unsigned int N, T, Anos, Cont;
	
	scanf("%u", &N);
	
	for(Cont = 0; Cont < N; Cont++)
	{	
		scanf("%u", &T);
		
		if(T > 2015)
			Anos = T - 2015;
		else
			Anos = 2015 - T;
		
		if(T >= 2015)
		{
			Anos = Anos + 1;
			printf("%u A.C.\n", Anos);
		}
		else if(T < 2015)
		{
			Anos = Anos;
			printf("%u D.C.\n", Anos);
		}
		else
			printf("%u A.C.\n", Anos);
	}
	
	return 0;
}