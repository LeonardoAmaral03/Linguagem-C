#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n;
	char texto[50];
	
	scanf("%d", &n);
	
	strcpy(texto, "LIFE IS NOT A PROBLEM TO BE SOLVED");
	
	texto[n] = '\0';
	
	printf("%s\n", texto);
	
	return 0;
}