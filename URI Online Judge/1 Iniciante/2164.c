#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n;
	double r;
	
	scanf("%d", &n);
	
	r = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);

	printf("%.1lf\n", r);
	
	return 0;
}