#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, cont, cont2;
	char texto[10];
	
	scanf("%d", &n);
	
	for(cont = 0; cont < n; cont++){
		scanf("%s", texto);
		
		if(strlen(texto) == 5)
			printf("3\n");
		else{
			if(texto[0] == 'o' && texto[1] == 'n' || texto[0] == 'o' && texto[2] == 'e' || texto[1] == 'n' && texto[2] == 'e')
				printf("1\n");
			else
				printf("2\n");
		}
	}
	
	return 0;
}