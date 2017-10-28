#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, L[1500], cont, d, t, q, c;
	
	d = 0;
	t = 0;
	q = 0;
	c = 0;
	
	scanf("%d", &N);
	
	for(cont = 0; cont < N; cont++)
		scanf("%d", &L[cont]);
	
	for(cont = 0; cont < N; cont++)
	{
		if(L[cont] % 2 == 0)
			d++;
		if(L[cont] % 3 == 0)
			t++;
		if(L[cont] % 4 == 0)
			q++;
		if(L[cont] % 5 == 0)
			c++;
	}
	
	printf("%d Multiplo(s) de 2\n", d);
	printf("%d Multiplo(s) de 3\n", t);
	printf("%d Multiplo(s) de 4\n", q);
	printf("%d Multiplo(s) de 5\n", c);
	
	return 0;
}