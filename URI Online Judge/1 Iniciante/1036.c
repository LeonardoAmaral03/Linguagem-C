#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	double A, B, C, R1, R2, Delta;
	
	scanf("%lf%lf%lf", &A, &B, &C);
	
	Delta = pow(B,2) - 4 * A * C;
	
	if(Delta >= 0 && A != 0)
	{
		R1 = (-(B) + sqrt(Delta)) / (2 * A);
		R2 = (-(B) - sqrt(Delta)) / (2 * A);
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}
	else
		printf("Impossivel calcular\n");
	
	return 0;
}