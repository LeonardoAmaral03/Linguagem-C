#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
	char n[1500], v[1500], d[3];
	int cont, i, tam, f;
	
	scanf(" %c %s", d, n);
	
	while(strcmp(d, "0") != 0 && strcmp(n, "0") != 0){
		tam = strlen(n);
		i = 0;
		f = 0;
		
		for(cont = 0; cont < tam; cont++){
			if(d[0] != n[cont]){
				v[i] = n[cont];
				i++;
			}
		}
		v[i] = '\0';
		tam = strlen(v);
		f = 0;
		
		for(i = 0; v[i] == '0'; i++);
		
		//printf("1 - i=%d   tam=%d\n", i, tam);
		
		if(i == tam)
			printf("0\n");
		else{
			for(cont = i; cont < tam; cont++){
				n[f] = v[cont];
				f++;
			}
			n[f] = '\0';
			
			//if(f == 1)
			printf("%s\n", n);
			//else
				//printf("0\n");
		}
		
		scanf(" %c %s", d, n);
	}
	
	return 0;
}