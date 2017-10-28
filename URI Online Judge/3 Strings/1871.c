#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long int m, n, soma, cont, i;
	char rec[15], guarda[15];
	
	scanf("%ld %ld", &m, &n);
	
	while(m != 0 && n !=0){
		soma = m + n;
		i = 0;
		
		sprintf(rec, "%ld", soma);
		//printf("%s\n", rec);
		
		for(cont = 0; cont < strlen(rec); cont++){
			if(rec[cont] != '0'){
				guarda[i] = rec[cont];
				i++;
			}
		}
		guarda[i] = '\0';
		
		soma = atol(guarda);
		
		printf("%ld\n", soma);
		
		scanf("%ld %ld", &m, &n);
	}
	
	return 0;
}