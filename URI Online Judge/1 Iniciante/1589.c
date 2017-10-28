#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	long int t, r1, r2, cont;
	
	scanf("%ld", &t);
	
	for(cont = 0; cont < t; cont++){
		scanf("%ld %ld", &r1, &r2);
		
		printf("%d\n", (r1 * 2 + r2 * 2) / 2);
	}
	
	return 0;
}