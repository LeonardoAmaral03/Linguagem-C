#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char num[20], contrario[20];
	int cont, i, t;
	
	scanf("%s", num);
	
	t = strlen(num);
	i = t - 1;
	
	for(cont = 0; cont < t; cont++){
		contrario[i] = num[cont];
		i--;
	}
	contrario[t] = '\0';
	
	printf("%s\n", contrario);
	
	return 0;
}