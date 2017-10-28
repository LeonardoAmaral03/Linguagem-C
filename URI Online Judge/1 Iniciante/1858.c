#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, cont, vetor[110], aux, pos;
	
	scanf("%d", &n);
	
	for(cont = 0; cont < n; cont++){
		scanf("%d", &vetor[cont]);
	}
	
	aux = vetor[0];
	pos = 1;
	
	for(cont = 1; cont < n; cont++){
		if(vetor[cont] < aux){
			pos = cont + 1;
			aux = vetor[cont];
		}
	}
	
	printf("%d\n", pos);
	
	return 0;
}