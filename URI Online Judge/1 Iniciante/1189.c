#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 12

int main(){
	char M[3];
	int i, j, m;
	double matriz[MAX][MAX], soma, media;
	
	scanf(" %c", M);
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			scanf("%lf", &matriz[i][j]);
		}
	}
	
	soma = 0;
	m = 1;
	
	for(j = 0; j < 5; j++){
		for(i = m; i < MAX - m; i++){
			soma = soma + matriz[i][j];
		}
		m = m + 1;
	}
	
	media = soma / 30;
	
	if(M[0] == 'S'){
		printf("%.1lf\n", soma);
	}
	else{
		printf("%.1lf\n", media);
	}
	
	return 0;
}