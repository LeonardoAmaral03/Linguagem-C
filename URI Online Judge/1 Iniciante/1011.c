#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int Raio;
	double Volume;
	
	scanf("%d", &Raio);
	
	Volume = (4.0/3) * 3.14159 * pow(Raio,3);
	
	printf("VOLUME = %.3lf\n", Volume);
	
	return 0;
}