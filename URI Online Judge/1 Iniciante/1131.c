#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int golver, golazul, decisao, vitver = 0, vitazul = 0, empate = 0, jogos = 0;
	
	do
	{
		jogos = jogos + 1;
		scanf("%d %d", &golver, &golazul);
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &decisao);
		
		if(golver > golazul)
			vitver = vitver + 1;
		else if(golver < golazul)
			vitazul = vitazul + 1;
		else
			empate = empate + 1;
	}
	while(decisao == 1);
	
	printf("%d grenais\n", jogos);
	printf("Inter:%d\n", vitver);
	printf("Gremio:%d\n", vitazul);
	printf("Empates:%d\n", empate);
	
	if(vitver > vitazul)
		printf("Inter venceu mais\n");
	else if(vitver < vitazul)
		printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");
	
	return 0;
}