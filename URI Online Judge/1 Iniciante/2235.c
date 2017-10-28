#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int A, B, C;
	
	scanf("%d %d %d", &A, &B, &C);
	
	if(A == B || B == C || A == C)
		printf("S\n");
	else if(A > B)
	{
		if((B + C) == A)
			printf("S\n");
		else
			printf("N\n");
	}
	else if(B > C)
	{
		if((A + C) == B)
			printf("S\n");
		else
			printf("N\n");
	}
	else if(C > A)
	{
		if((A + B) == C)
			printf("S\n");
		else
			printf("N\n");
	}
	return 0;
}