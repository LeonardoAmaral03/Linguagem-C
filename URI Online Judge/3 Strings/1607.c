#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int t, cont, cont2, op;
	char a[10005], b[10005];
	
	scanf("%d", &t);
	
	for(cont = 0; cont < t; cont++){
		scanf("%s %s", a, b);
		
		op = 0;
		
		for(cont2 = 0; cont2 < strlen(a); cont2++){
			if(a[cont2] == b[cont2])
				op += 0;
			else if(a[cont2] < b[cont2])
				op += b[cont2] - a[cont2];
			else
				op += (b[cont2] + 26) - a[cont2];
		}
		
		printf("%d\n", op);
	}
	
	return 0;
}