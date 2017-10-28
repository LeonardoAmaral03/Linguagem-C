#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double sal, salfinal, reajuste;
	int perc;
	
	scanf("%lf", &sal);
	
	if(sal <= 400.00)
	{
		salfinal = sal * 1.15;
		reajuste = sal * 0.15;
		perc = 15;
	}
	else if(sal > 400.00 && sal <= 800.00)
	{
		salfinal = sal * 1.12;
		reajuste = sal * 0.12;
		perc = 12;
	}
	else if(sal > 800.00 && sal <= 1200.00)
	{
		salfinal = sal * 1.10;
		reajuste = sal * 0.10;
		perc = 10;
	}
	else if(sal > 1200.00 && sal <= 2000.00)
	{
		salfinal = sal * 1.07;
		reajuste = sal * 0.07;
		perc = 7;
	}
	else
	{
		salfinal = sal * 1.04;
		reajuste = sal * 0.04;
		perc = 4;
	}
	
	printf("Novo salario: %.2lf\n", salfinal);
	printf("Reajuste ganho: %.2lf\n", reajuste);
	printf("Em percentual: %d %%\n", perc);
	
	return 0;
}