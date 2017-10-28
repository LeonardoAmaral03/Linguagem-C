#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int xi, yi, xf, yf;
	
	scanf("%d %d %d %d", &xi, &yi, &xf, &yf);
	
	while(xi != 0 && yi != 0 && xf != 0 && yf != 0){
		if(xi == xf && yi == yf)
			printf("0\n");
		else if((xi + yi) == (xf + yf))
			printf("1\n");
		else if(xi == xf || yi == yf)
			printf("1\n");
		else if(xi == yi && xf == yf)
			printf("1\n");
		else if((yi - xi) == (yf - xf))
			printf("1\n");
		//else if((xi - yi) == (xf - yf))
			//printf("1\n");
		else
			printf("2\n");
		
		scanf("%d %d %d %d", &xi, &yi, &xf, &yf);
	}
	
	return 0;
}