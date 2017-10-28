#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char palavra[110];
	int cont, cont2, cont3, esp, tam, tam2;
	
	while(scanf("%s", palavra) != EOF){
		tam = strlen(palavra);
		tam2 = tam;
		esp = -1;
		
		for(cont = 0; cont < tam; cont++){
			for(cont3 = 0; cont3 < esp; cont3++){
				printf(" ");
			}
			for(cont2 = 0; cont2 < tam2; cont2++){
				if(cont == 0 && cont2 == 0)
					printf("%c", palavra[cont2]);
				else
					printf(" %c", palavra[cont2]);
				//if(cont2 < tam - 1)
					//printf(" ");
			}
			printf("\n");
			esp++;
			tam2--;
			if(cont == tam - 1)
				printf("\n");
		}
	}
	
	return 0;
}