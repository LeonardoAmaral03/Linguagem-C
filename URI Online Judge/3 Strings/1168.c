#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ 
	while(getchar()!='\n');

	return;
}

int main (void)
{
	int N, cont, c, Leds;
	char V[10000];
	
	scanf("%d", &N);
	
	LimpaBuffer();
	
	for(cont = 0; cont < N; cont++)
	{
		Leds = 0;
		c = 0;
		
		fgets(V, 10000, stdin);
		
		while(V[c] != 10 && V[c] != ' ')
		{
			if(V[c] == '1')
				Leds = Leds + 2;
			else
				if(V[c] == '2')
					Leds = Leds + 5;
				else
					if(V[c] == '3')
						Leds = Leds + 5;
					else
						if(V[c] == '4')
							Leds = Leds + 4;
						else
							if(V[c] == '5')
								Leds = Leds + 5;
							else
								if(V[c] == '6')
									Leds = Leds + 6;
								else
									if(V[c] == '7')
										Leds = Leds + 3;
									else
										if(V[c] == '8')
											Leds = Leds + 7;
										else
											if(V[c] == '9')
												Leds = Leds + 6;
											else
												Leds = Leds + 6;
			c++;
		}
		
		printf("%d leds\n", Leds);
	}
	
	return 0;
}