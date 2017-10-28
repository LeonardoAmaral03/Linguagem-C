#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int A, B, C;
	
	scanf("%d %d", &A, &B);
	
	if(A > B)
	{
		C = A;
		A = B;
		B = C;
	}
	
	if(B % A == 0)
		printf("Sao Multiplos\n");
	else
		printf("Nao sao Multiplos\n");
	
	return 0;
}