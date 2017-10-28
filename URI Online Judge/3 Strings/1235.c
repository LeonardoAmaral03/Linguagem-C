#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar() != '\n');
	return;
}

int main (void)
{
	int n, cont, cont2, tam, i;
	char texto[110], guarda[110];
	
	scanf("%d", &n);
	LimpaBuffer();
	
	for(cont = 0; cont < n; cont++){
		fgets(texto, 110, stdin);
		for(cont2 = 0; texto[cont2] >= ' '; cont2++);
		texto[cont2] = '\0';
		
		tam = strlen(texto);
		
		i = 0;
		
		for(cont2 = tam / 2 - 1; cont2 >= 0; cont2--){
			guarda[i] = texto[cont2];
			i++;
		}
		
		for(cont2 = tam - 1; cont2 >= tam / 2; cont2--){
			guarda[i] = texto[cont2];
			i++;
		}
		guarda[i] = '\0';
		
		printf("%s\n", guarda);
	}
	
	return 0;
}