#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int IdadeDias, Ano, Mes, Dias;
	
	scanf("%d", &IdadeDias);
	
	Ano = IdadeDias / 365;
	Mes = (IdadeDias % 365) / 30;
	Dias = (IdadeDias % 365) % 30;
	
	printf("%d ano(s)\n", Ano);
	printf("%d mes(es)\n", Mes);
	printf("%d dia(s)\n", Dias);
	
	return 0;
}