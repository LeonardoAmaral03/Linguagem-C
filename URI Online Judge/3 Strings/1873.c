#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int tesoura(char *);
int lagarto(char *);
int pedra(char *);
int papel(char *);
int spock(char *);

int main()
{
	int c, cont, r;
	char p1[10], p2[10];
	
	scanf("%d", &c);
	
	for(cont = 0; cont < c; cont++){
		scanf("%s %s", p1, p2);
		
		if(strcmp(p1, "tesoura") == 0)
			r = tesoura(p2);
		else if(strcmp(p1, "lagarto") == 0)
			r = lagarto(p2);
		else if(strcmp(p1, "pedra") == 0)
			r = pedra(p2);
		else if(strcmp(p1, "papel") == 0)
			r = papel(p2);
		else
			r = spock(p2);
		
		if(r == 0)
			printf("empate\n");
		else if(r == 1)
			printf("rajesh\n");
		else
			printf("sheldon\n");
	}
	
	return 0;
}

int tesoura(char *x){
	if(strcmp(x, "tesoura") == 0)
		return 0;
	else if(strcmp(x, "papel") == 0)
		return 1;
	else if(strcmp(x, "lagarto") == 0)
		return 1;
	else if(strcmp(x, "spock") == 0)
		return 2;
	else
		return 2;
}

int lagarto(char *x){
	if(strcmp(x, "lagarto") == 0)
		return 0;
	else if(strcmp(x, "spock") == 0)
		return 1;
	else if(strcmp(x, "papel") == 0)
		return 1;
	else if(strcmp(x, "pedra") == 0)
		return 2;
	else
		return 2;
}

int pedra(char *x){
	if(strcmp(x, "pedra") == 0)
		return 0;
	else if(strcmp(x, "lagarto") == 0)
		return 1;
	else if(strcmp(x, "tesoura") == 0)
		return 1;
	else if(strcmp(x, "papel") == 0)
		return 2;
	else
		return 2;
}

int papel(char *x){
	if(strcmp(x, "papel") == 0)
		return 0;
	else if(strcmp(x, "pedra") == 0)
		return 1;
	else if(strcmp(x, "spock") == 0)
		return 1;
	else if(strcmp(x, "tesoura") == 0)
		return 2;
	else
		return 2;
}

int spock(char *x){
	if(strcmp(x, "spock") == 0)
		return 0;
	else if(strcmp(x, "tesoura") == 0)
		return 1;
	else if(strcmp(x, "pedra") == 0)
		return 1;
	else if(strcmp(x, "lagarto") == 0)
		return 2;
	else
		return 2;
}