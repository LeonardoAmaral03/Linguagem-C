#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int CodPeca, NumPeca, Cont;
	float ValPeca, ValTotal;

	ValTotal = 0;
	
	for(Cont = 0; Cont < 2; Cont++)
	{
		scanf("%d%d%f", &CodPeca, &NumPeca, &ValPeca);
		ValTotal = ValTotal + (NumPeca * ValPeca);
	}
	
	printf("VALOR A PAGAR: R$ %.2f\n", ValTotal);
	
	return 0;
}