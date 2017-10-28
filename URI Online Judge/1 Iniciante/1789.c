#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int l, v[501], cont, maior;
	
	while(scanf("%d", &l) != EOF){
		maior = 0;
		for(cont = 0; cont < l; cont++){
			scanf("%d", &v[cont]);
			
			if(v[cont] > maior){
				maior = v[cont];
			}
		}
		
		if(maior < 10)
			printf("1\n");
		else if(maior < 20)
			printf("2\n");
		else
			printf("3\n");
	}
	
	return 0;
}