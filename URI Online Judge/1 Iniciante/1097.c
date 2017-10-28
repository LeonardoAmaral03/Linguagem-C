#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int I, J, X, Y, Cont;
	
	X = 3;
	I = 1;
	J = 7;
	
	for(Y = 0; Y < 5; Y++)
	{
		for(Cont = 0; Cont < X; Cont++)
		{
			printf("I=%d J=%d\n", I, J);
			J = J - 1;
		}
		J = J + 5;
		I = I + 2;
	}
	return 0;
}