#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int c, n, cont, cont2, f, s;
	
	scanf("%d", &c);
	
	for(cont = 0; cont < c; cont++){
		scanf("%d", &n);
		
		f = 0;
		s = 1;
		
		for(cont2 = 0; cont2 < n - 1; cont2++){
			if(f == 0){
				s -= 1;
				f = 1;
			}
			else{
				s += 1;
				f = 0;
			}
		}
		
		printf("%d\n", s);
	}
	
	return 0;
}