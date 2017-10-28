#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float A, B, C, Area, Perimetro;
	
	scanf("%f %f %f", &A, &B, &C);
	
	if(A + B > C && B + C > A && C + A > B)
	{
		Perimetro = A + B + C;
		printf("Perimetro = %.1f\n", Perimetro);
	}
	else
	{
		Area = ((A + B) * C) / 2;
		printf("Area = %.1f\n", Area);
	}
	
	return 0;
}