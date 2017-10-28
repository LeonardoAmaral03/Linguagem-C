#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct tbvetor{int val; int pos;};
typedef struct tbvetor TPvetor;

int ordena(const void *p1, const void *p2)
{
	TPvetor *i = (TPvetor *)p1;
	TPvetor *j = (TPvetor *)p2;
	
	if(i->val < j->val)
		return -1;
	else
		if(i->val == j->val)
			return 0;
		else
			return 1;
}

int main()
{
	int N, cont;
	TPvetor vetor[1100];
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
	{
		scanf("%d", &vetor[cont].val);
		vetor[cont].pos = cont;
	}
	
	qsort(vetor, N, sizeof(TPvetor), ordena);
	
	printf("Menor valor: %d\n", vetor[0].val);
	printf("Posicao: %d\n", vetor[0].pos);
	
	return 0;
}