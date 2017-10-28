#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct TCob{int num; char tipo[3];};
typedef struct TCob TabCobaia;

int ordena(const void *p1, const void *p2)
{
	TabCobaia *i = (TabCobaia *)p1;
	TabCobaia *j = (TabCobaia *)p2;
	
	return strcmp(i->tipo, j->tipo);
}

int main()
{
	TabCobaia Cobaias[10000];
	int N, cont, TC = 0, TR = 0, TS = 0, Total = 0;
	float PC = 0.0, PR = 0.0, PS = 0.0;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
		scanf("%d %s", &Cobaias[cont].num, Cobaias[cont].tipo);
	
	qsort(Cobaias, N, sizeof(TabCobaia), ordena);
	
	for(cont = 0; cont < N; cont++)
	{
		if(strcmp(Cobaias[cont].tipo, "C") == 0)
			TC = TC + Cobaias[cont].num;
		else if(strcmp(Cobaias[cont].tipo, "R") == 0)
			TR = TR + Cobaias[cont].num;
		else
			TS = TS + Cobaias[cont].num;
	}
	
	Total = TC + TR + TS;
	PC = (100.0 * TC) / Total;
	PR = (100.0 * TR) / Total;
	PS = (100.0 * TS) / Total;
	
	printf("Total: %d cobaias\n", Total);
	printf("Total de coelhos: %d\n", TC);
	printf("Total de ratos: %d\n", TR);
	printf("Total de sapos: %d\n", TS);
	printf("Percentual de coelhos: %.2f %%\n", PC);
	printf("Percentual de ratos: %.2f %%\n", PR);
	printf("Percentual de sapos: %.2f %%\n", PS);
	
	return 0;
}