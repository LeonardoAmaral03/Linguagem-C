#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cod, qnt;
	float total;
	
	scanf("%d %d", &cod, &qnt);
	
	if(cod == 1)
		printf("Total: R$ %.2f\n", 4.00 * qnt);
	else if(cod == 2)
		printf("Total: R$ %.2f\n", 4.50 * qnt);
	else if(cod == 3)
		printf("Total: R$ %.2f\n", 5.00 * qnt);
	else if(cod == 4)
		printf("Total: R$ %.2f\n", 2.00 * qnt);
	else if(cod == 5)
		printf("Total: R$ %.2f\n", 1.50 * qnt);
	
	return 0;
}