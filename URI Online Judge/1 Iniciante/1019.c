#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

int main()
{
	int N, Hora = 0, Min = 0, Seg = 0;
	
	scanf("%d", &N);
	
	if(N > 59)
	{
		Min = N / 60;
		if(Min > 59)
		{
			Hora = Min / 60;
			Min = Min % 60;
			Seg = N % 60;
		}
		else
			Seg = N % 60;
	}
	else
		Seg = N;
	
	printf("%d:%d:%d\n", Hora, Min, Seg);
	
	return 0;
}