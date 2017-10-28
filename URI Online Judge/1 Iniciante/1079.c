#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int N, Cont;
	float N1, N2, N3, MP;
	
	scanf("%d", &N);
	
	for(Cont = 0; Cont < N; Cont++)
	{
		scanf("%f%f%f", &N1, &N2, &N3);
		
		MP = ((N1 * 0.2)+(N2 * 0.3)+(N3 * 0.5));
		
		printf("%.1f\n", MP);
	}
	
	return 0;
}