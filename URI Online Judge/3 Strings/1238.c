#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
	int n, cont, cont2, cont3, tam1, tam2, f, i, j;
	char txt1[60], txt2[60], recebe[110];
	
	scanf("%d", &n);
	
	for(cont = 0; cont < n; cont++){
		scanf("%s %s", txt1, txt2);
		
		tam1 = strlen(txt1);
		tam2 = strlen(txt2);
		f = 0;
		i = 0;
		j = 0;
		
		if(tam1 > tam2){
			for(cont2 = 0; cont2 < tam2 * 2; cont2++){
				if(f == 0){
					recebe[cont2] = txt1[i];
					i++;
					f = 1;
				}
				else{
					recebe[cont2] = txt2[j];
					j++;
					f = 0;
				}
			}
			
			for(cont3 = tam1 - (tam1 - tam2); cont3 < tam1; cont3++){
				recebe[cont2] = txt1[cont3];
				cont2++;
			}
			recebe[cont2] = '\0';
		}
		else{
			for(cont2 = 0; cont2 < tam1 * 2; cont2++){
				if(f == 0){
					recebe[cont2] = txt1[i];
					i++;
					f = 1;
				}
				else{
					recebe[cont2] = txt2[j];
					j++;
					f = 0;
				}
			}
			
			if(tam2 > tam1){
				for(cont3 = tam2 - (tam2 - tam1); cont3 < tam2; cont3++){
					recebe[cont2] = txt2[cont3];
					cont2++;
				}
				recebe[cont2] = '\0';
			}
			else{
				recebe[cont2] = '\0';
			}
		}
		
		printf("%s\n", recebe);
	}
	
	return 0;
}