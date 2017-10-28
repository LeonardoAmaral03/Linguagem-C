#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
	char texto[60];
	int cont, i;
	
	while(fgets(texto, 60, stdin) != NULL){
		for(cont = 0; texto[cont] >= ' '; cont++);
		texto[cont] = '\0';
		
		i = 0;
		
		for(cont = 0; cont < strlen(texto); cont++){
			if(texto[cont] != ' '){
				if(i == 0){
					texto[cont] = toupper(texto[cont]);
					i = 1;
				}
				else if(i == 1){
					texto[cont] = tolower(texto[cont]);
					i = 0;
				}
			}
		}
		
		printf("%s\n", texto);
	}
	
	return 0;
}