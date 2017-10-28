#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int H,P;
	double media;
	
	scanf("%d %d", &H, &P);
	
	media = (double)H / P;
	
	printf("%.2lf\n", media);
	
	return 0;
}