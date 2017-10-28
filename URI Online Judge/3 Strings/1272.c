#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LimpaBuffer(){
	while(getchar() != '\n');
	return;
}

int main()
{
	int n, cont, cont2, i, f;
	char texto[55], guarda[55];
	
	scanf("%d", &n);
	LimpaBuffer();
	
	for(cont = 0; cont < n; cont++){
		fgets(texto, 55, stdin);
		for(cont2 = 0; texto[cont2] >= ' '; cont2++);
		texto[cont2] = '\0';
		
		i = 0;
		f = 0;
		
		for(cont2 = 0; cont2 < strlen(texto); cont2++){
			if(texto[cont2] == ' '){
				f = 0;
			}
			else{
				f++;
				if(f == 1){
					guarda[i] = texto[cont2];
					i++;
				}
			}
		}
		guarda[i] = '\0';
		
		printf("%s\n", guarda);
	}
	
	return 0;
}