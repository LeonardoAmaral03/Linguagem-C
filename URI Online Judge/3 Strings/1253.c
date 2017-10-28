#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, cont, v, aux, cont2;
	char texto[55];
	
	scanf("%d", &n);
	
	for(cont = 0; cont < n; cont++){
		scanf("%s", texto);
		scanf("%d", &v);
		
		for(cont2 = 0; cont2 < strlen(texto); cont2++){
			aux = texto[cont2] - v;
			if(aux < 65){
				aux = aux + 26;
			}
			
			texto[cont2] = aux;
		}
		
		printf("%s\n", texto);
	}
	
	return 0;
}