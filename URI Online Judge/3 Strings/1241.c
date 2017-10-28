#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, cont, cont2, tama, tamb, i, f;
	char a[1010], b[1010];
	
	scanf("%d", &n);
	
	for(cont = 0; cont < n; cont++){
		scanf("%s %s", a, b);
		
		tama = strlen(a);
		tamb = strlen(b);
		i = 0;
		f = 0;
		
		if(tamb > tama)
			f = 1;
		else{
			for(cont2 = tama-tamb; cont2 < tama; cont2++){
				if(a[cont2] != b[i]){
					f = 1;
					break;
				}
				i++;
			}
		}
		
		if(f == 0)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
	}
	
	return 0;
}