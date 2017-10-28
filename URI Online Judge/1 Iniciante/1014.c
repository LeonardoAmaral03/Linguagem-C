#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

int main()
{
	int X;
	float Y, Consumo;
	
	scanf("%d", &X);
	scanf("%f", &Y);
	
	Consumo = X / Y;
	
	printf("%.3f km/l\n", Consumo);
	
	return 0;
}