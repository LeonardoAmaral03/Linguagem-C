#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont, a, f;
	char e[1010];
	
	while(scanf("%s", e) != EOF)
	{
		a = 0;
		f = 0;
		
		for(cont = 0; cont < strlen(e); cont++)
		{
			if(f > a)
				break;
			else if(e[cont] == '(')
				a++;
			else if(e[cont] == ')')
				f++;
		}
		
		if(a - f != 0)
			printf("incorrect\n");
		else
			printf("correct\n");
	}
	
	return 0;
}