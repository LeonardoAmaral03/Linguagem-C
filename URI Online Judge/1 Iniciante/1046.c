#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int i, t, d;
	
	scanf("%d %d", &i, &t);
	
	if(i > t)
		d = (24 - i) + t;
	else if(i == t)
		d = 24;
	else
		d = t - i;
	
	printf("O JOGO DUROU %d HORA(S)\n", d);
	
	return 0;
}