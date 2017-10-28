#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void LimpaBuffer()
{
	while(getchar() != '\n');
	return;
}

int main(){
	char texto[1100], inverte[1100];
	int n, cont, cont2, tam, i;
	
	scanf("%d", &n);
	LimpaBuffer();
	
	for(cont = 0; cont < n; cont++){
		fgets(texto, 1100, stdin);
		
		for(cont2 = 0; texto[cont2] >= ' '; cont2++);
		texto[cont2] = '\0';
		
		tam = strlen(texto);
		
		for(cont2 = 0; cont2 < tam; cont2++){
			if(texto[cont2] >= 'A' && texto[cont2] <= 'Z')
				texto[cont2] = texto[cont2] + 3;
			else if(texto[cont2] >= 'a' && texto[cont2] <= 'z')
				texto[cont2] = texto[cont2] + 3;
		}
		
		i = tam - 1;
		
		for(cont2 = 0; cont2 < tam; cont2++){
			inverte[cont2] = texto[i];
			i--;
		}
		inverte[cont2] = '\0';
		
		i = (int)(tam / 2);
		
		for(cont2 = i; cont2 < tam; cont2++){
			inverte[cont2] = inverte[cont2] - 1;
		}
		
		printf("%s\n", inverte);
	}
	
	return 0;
}