#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float valor;
	int notas, moedas, valinteiro;
	
	scanf("%f", &valor);
	
	valinteiro = (int)valor;
	
	printf("NOTAS:\n");
	
	notas = valinteiro / 100;
	printf("%d nota(s) de R$ 100.00\n", notas);
	valinteiro = valinteiro % 100;
	
	notas = valinteiro / 50;
	printf("%d nota(s) de R$ 50.00\n", notas);
	valinteiro = valinteiro % 50;
	
	notas = valinteiro / 20;
	printf("%d nota(s) de R$ 20.00\n", notas);
	valinteiro = valinteiro % 20;
	
	notas = valinteiro / 10;
	printf("%d nota(s) de R$ 10.00\n", notas);
	valinteiro = valinteiro % 10;
	
	notas = valinteiro / 5;
	printf("%d nota(s) de R$ 5.00\n", notas);
	valinteiro = valinteiro % 5;
	
	notas = valinteiro / 2;
	printf("%d nota(s) de R$ 2.00\n", notas);
	valinteiro = valinteiro % 2;

	valinteiro = (int)(((valor - ((int)valor - valinteiro)) * 100) + 0.5);
	
	printf("MOEDAS:\n");
	
	moedas = valinteiro / 100;
	printf("%d moeda(s) de R$ 1.00\n", moedas);
	valinteiro = valinteiro % 100;
	
	moedas = valinteiro / 50;
	printf("%d moeda(s) de R$ 0.50\n", moedas);
	valinteiro = valinteiro % 50;
	
	moedas = valinteiro / 25;
	printf("%d moeda(s) de R$ 0.25\n", moedas);
	valinteiro = valinteiro % 25;
	
	moedas = valinteiro / 10;
	printf("%d moeda(s) de R$ 0.10\n", moedas);
	valinteiro = valinteiro % 10;
	
	moedas = valinteiro / 5;
	printf("%d moeda(s) de R$ 0.05\n", moedas);
	valinteiro = valinteiro % 5;
	
	moedas = valinteiro / 1;
	printf("%d moeda(s) de R$ 0.01\n", moedas);
	valinteiro = valinteiro % 1;
	
	return 0;
}