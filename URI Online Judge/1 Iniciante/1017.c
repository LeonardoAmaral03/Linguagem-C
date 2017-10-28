#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Tempo, VelMedia;
	float CombGasto;
	
	scanf("%d%d", &Tempo, &VelMedia);
	
	CombGasto = (VelMedia / 12.0) * Tempo;
	
	printf("%.3f\n", CombGasto);
	
	return 0;
}