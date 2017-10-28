#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int T, PA, PB, anos, cont;
	double G1, G2;
	
	scanf("%d", &T);
	
	for(cont = 0; cont < T; cont++)
	{
		anos = 0;
		
		scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
		
		G1 = G1 / 100;
		G2 = G2 / 100;
		
		while(PA <= PB)
		{
			if(anos > 100)
				break;
			
			PA = (int)(PA + (PA * G1));
			PB = (int)(PB + (PB * G2));
			
			anos = anos + 1;
		}
		
		if(anos > 100)
			printf("Mais de 1 seculo.\n", anos);
		else
			printf("%d anos.\n", anos);
	}
	
	return 0;
}