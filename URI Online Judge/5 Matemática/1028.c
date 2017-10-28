#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int mdc(int F1, int F2)
{
	int Aux;
	
	if(F1 < 0)
		F1 = -F1;
	if(F2 < 0)
		F2 = -F2;
	
	if(F2 > F1)
	{
		Aux = F1;
		F1 = F2;
		F2 = Aux;
	}
	
	if(F1 % F2 == 0)
		return F2;
	else
		return mdc(F2, F1 % F2);
}

int main()
{
	int N, F1, F2, cont;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%d %d", &F1, &F2);
		
		printf("%d\n", mdc(F1, F2));
	}
	
	return 0;
}