#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	char Vendedor[20];
	double Sal, Vendas, SalFinal;
	
	scanf("%s", Vendedor);
	scanf("%lf%lf", &Sal, &Vendas);
	
	SalFinal = Sal + (Vendas * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", SalFinal);
	
	return 0;
}