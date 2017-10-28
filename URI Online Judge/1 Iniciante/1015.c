#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	float X1, Y1, X2, Y2, Distancia;
	
	scanf("%f%f%f%f", &X1, &Y1, &X2, &Y2);
	
	Distancia = sqrt((pow((X2 - X1),2)) + (pow((Y2 - Y1),2)));
	
	printf("%.4f\n", Distancia);
	
	return 0;
}