#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	unsigned int Valor, Nota100, Nota50, Nota20, Nota10, Nota5, Nota2, Nota1, Aux;
	
	scanf("%u", &Valor);
	
	Aux = Valor;
	
	Nota100 = Valor / 100;
	Valor = Valor % 100;
	Nota50 = Valor / 50;
	Valor = Valor % 50;
	Nota20 = Valor / 20;
	Valor = Valor % 20;
	Nota10 = Valor / 10;
	Valor = Valor % 10;
	Nota5 = Valor / 5;
	Valor = Valor % 5;
	Nota2 = Valor / 2;
	Valor = Valor % 2;
	Nota1 = Valor / 1;
	
	printf("%u\n", Aux);
	printf("%u nota(s) de R$ 100,00\n", Nota100);
	printf("%u nota(s) de R$ 50,00\n", Nota50);
	printf("%u nota(s) de R$ 20,00\n", Nota20);
	printf("%u nota(s) de R$ 10,00\n", Nota10);
	printf("%u nota(s) de R$ 5,00\n", Nota5);
	printf("%u nota(s) de R$ 2,00\n", Nota2);
	printf("%u nota(s) de R$ 1,00\n", Nota1);
	
	return 0;
}