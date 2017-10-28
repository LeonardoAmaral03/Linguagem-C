#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, cont;
	char palavra[30];
	
	scanf("%d", &n);
	
	for(cont = 0; cont < n; cont++){
		scanf("%s", palavra);
		
		if(cont != 0)
			printf(" ");
		
		if(strlen(palavra) == 3){
			if(palavra[0] == 'O' && palavra[1] == 'B' && palavra[2] != 'I'){
				printf("OBI");
			}
			else if(palavra[0] == 'U' && palavra[1] == 'R' && palavra[2] != 'I'){
				printf("URI");
			}
			else{
				printf("%s", palavra);
			}
		}
		else{
			printf("%s", palavra);
		}
	}
	
	printf("\n");
	
	return 0;
}