#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int hi, mi, ht, mt, hd, md;
	
	scanf("%d %d %d %d", &hi, &mi, &ht, &mt);
	
	if(hi > ht)
		hd = (24 - hi) + ht;
	else if(hi == ht)
		hd = 24;
	else
		hd = ht - hi;
	
	if(mi > mt)
		hd = hd -1;
	
	if(mi > mt)
		md = (60 - mi) + mt;
	else if(mi == mt)
		md = 0;
	else
		md = mt - mi;
	
	if(hd == 1 && mi > mt)
		hd = 0;
	if(hi == ht && mi < mt)
		hd = 0;
	if(hi == ht && mi > mt)
		hd = 23;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
	
	return 0;
}