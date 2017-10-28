#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char texto[60], recebe[200];
	int cont, i, tam, f, g;
	
	while(fgets(texto, 60, stdin) != NULL){
		for(cont = 0; texto[cont] >= ' '; cont++);
		texto[cont] = '\0';
		
		tam = strlen(texto);
		i = 0;
		f = 0;
		g = 0;
		
		for(cont = 0; cont < tam; cont++){
			if(texto[cont] == '_'){
				if(f == 0){
					recebe[i] = '<';
					recebe[i+1] = 'i';
					recebe[i+2] = '>';
					i += 3;
					f = 1;
				}
				else{
					recebe[i] = '<';
					recebe[i+1] = '/';
					recebe[i+2] = 'i';
					recebe[i+3] = '>';
					i += 4;
					f = 0;
				}
			}
			else if(texto[cont] == '*'){
				if(g == 0){
					recebe[i] = '<';
					recebe[i+1] = 'b';
					recebe[i+2] = '>';
					i += 3;
					g = 1;
				}
				else{
					recebe[i] = '<';
					recebe[i+1] = '/';
					recebe[i+2] = 'b';
					recebe[i+3] = '>';
					i += 4;
					g = 0;
				}
			}
			else{
				recebe[i] = texto[cont];
				i++;
			}
		}
		recebe[i] = '\0';
		
		printf("%s\n", recebe);
	}
	
	return 0;
}