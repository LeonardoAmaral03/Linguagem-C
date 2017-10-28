#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double n1, n2, n3, n4, ne, media;
	
	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	
	media = ((n1 * 0.2) + (n2 * 0.3) + (n3 * 0.4) + (n4 * 0.1));
	
	printf("Media: %.1lf\n", media);
	
	if(media >= 7.0)
		printf("Aluno aprovado.\n");
	else if(media < 5.0)
		printf("Aluno reprovado.\n");
	else
	{
		printf("Aluno em exame.\n");
	
		scanf("%lf", &ne);
		
		printf("Nota do exame: %.1lf\n", ne);
		
		media = (media + ne) / 2;
		
		if(media >= 5.0)
			printf("Aluno aprovado.\n");
		else
			printf("Aluno reprovado.\n");
		
		printf("Media final: %.1lf\n", media);
	}
	
	return 0;
}