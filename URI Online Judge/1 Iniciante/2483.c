#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i, cont;;
	char natal[10100];
	
	scanf("%d", &i);
	
	strcpy(natal, "Feliz nat");
	
	for(cont = 9; cont < i + 9; cont++){
		natal[cont] = 'a';
	}
	natal[cont] = 'l';
	natal[cont + 1] = '!';
	natal[cont + 2] = '\0';
	
	printf("%s\n", natal);
	
	return 0;
}