#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int T, A, B, C, D, E, Cont;
	
	Cont = 0;
	
	scanf("%d%d%d%d%d%d", &T, &A, &B, &C, &D, &E);
	
	if(T == A)
		Cont++;
	if(T == B)
		Cont++;
	if(T == C)
		Cont++;
	if(T == D)
		Cont++;
	if(T == E)
		Cont++;
	
	printf("%d\n", Cont);
	
	return 0;
}