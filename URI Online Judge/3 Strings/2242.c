#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char ris[60], aux[60], aux2[60];
	int cont, tam, a = 0, b = 0;
	
	scanf("%s", ris);
	
	tam = strlen(ris);
	//printf("%d\n\n", tam);
	
	for(cont = 0; cont < tam; cont++)
	{
		if(ris[cont] == 'a' || ris[cont] == 'e' || ris[cont] == 'i' || ris[cont] == 'o' || ris[cont] == 'u')
		{
			aux[a] = ris[cont];
			a++;
		}
		//printf("%d\n", cont);
	}
	aux[a] = '\0';
	//printf("%s\n", aux);
	
	for(cont = tam - 1; cont >= 0; cont--)
	{
		if(ris[cont] == 'a' || ris[cont] == 'e' || ris[cont] == 'i' || ris[cont] == 'o' || ris[cont] == 'u')
		{
			aux2[b] = ris[cont];
			b++;
		}
	}
	aux2[b] = '\0';
	//printf("%s\n", aux2);

	
	if(strcmp(aux, aux2) == 0)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}