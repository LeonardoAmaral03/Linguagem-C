#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int qtGrito = 0, cont, soma;
	char entrada[10];
	
	while(qtGrito < 3){
		soma = 0;
		fgets(entrada, 10, stdin);
		for(cont = 0; entrada[cont] >= ' '; cont++);
		entrada[cont] = '\0';
		
		while(strcmp(entrada, "caw caw") != 0){
			if(entrada[0] == '*')
				soma = soma + 4;
			if(entrada[1] == '*')
				soma = soma + 2;
			if(entrada[2] == '*')
				soma = soma + 1;
			
			fgets(entrada, 10, stdin);
			for(cont = 0; entrada[cont] >= ' '; cont++);
			entrada[cont] = '\0';
		}
		
		printf("%d\n", soma);
		qtGrito++;
	}
	
	return 0;
}