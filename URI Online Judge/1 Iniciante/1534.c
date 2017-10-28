#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, cont, cont2, i;
	
	while(scanf("%d", &n) != EOF){
		i = 0;
		
		for(cont = 0; cont < n; cont++){
			for(cont2 = 0; cont2 < n; cont2++){
				if(cont2 == n - 1 - i)
					printf("2");
				else if(cont2 == i)
					printf("1");
				else
					printf("3");
			}
			printf("\n");
			i++;
		}
	}
	
	return 0;
}