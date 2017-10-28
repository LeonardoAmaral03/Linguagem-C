#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long long int A, B, C, D, cont;
	
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	
	if(A == B || C == D)
		printf("-1\n");
	else
	{
		for(cont = A; cont <= C; cont = cont + A)
		{
			//printf("entrou cont = %d\n", cont);
			if(C % cont == 0){
				if(cont % A == 0 && cont % B != 0 && D % cont != 0){
					printf("%lld\n", cont);
					break;
				}
			}
		}
		if(cont > C)
			printf("-1\n");
	}
	
	return 0;
}