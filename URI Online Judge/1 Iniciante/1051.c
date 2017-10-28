#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double sal, ir, g;
	
	scanf("%lf", &sal);
	
	if(sal <= 2000.00)
		printf("Isento\n");
	else if(sal > 2000.00 && sal <= 3000.00)
	{
		g = sal - 2000.00;
		ir = g * 0.08;
		printf("R$ %.2lf\n", ir);
	}
	else if(sal > 3000.00 && sal <= 4500.00)
	{
		g = (sal - 2000.00 ) - 1000.00;
		ir = (1000.00 * 0.08) + (g * 0.18);
		printf("R$ %.2lf\n", ir);
	}
	else
	{
		g = (sal - 2000.00) - 1000;
		g = g - 1500;
		ir = (1000.00 * 0.08) + (1500.00 * 0.18) + (g * 0.28);
		printf("R$ %.2lf\n", ir);
	}
	
	return 0;
}