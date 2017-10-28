#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int num, vetpar[5], vetimpar[5], cont, contpar, contimpar;
	
	for(cont = 0; cont < 15; cont++){
		scanf("%d", &num);
		
		if(num % 2 == 0){
			vetpar[contpar] = num;
			contpar++;
			if(contpar == 5){
				for(contpar = 0; contpar < 5; contpar++){
					printf("par[%d] = %d\n", contpar, vetpar[contpar]);
				}
				contpar = 0;
			}
		}
		else{
			vetimpar[contimpar] = num;
			contimpar++;
			if(contimpar == 5){
				for(contimpar = 0; contimpar < 5; contimpar++){
					printf("impar[%d] = %d\n", contimpar, vetimpar[contimpar]);
				}
				contimpar = 0;
			}
		}
	}
	
	if(contimpar > 0){
		for(cont = 0; cont < contimpar; cont++){
			printf("impar[%d] = %d\n", cont, vetimpar[cont]);
		}
	}
	if(contpar > 0){
		for(cont = 0; cont < contpar; cont++){
			printf("par[%d] = %d\n", cont, vetpar[cont]);
		}
	}
	
	return 0;
}