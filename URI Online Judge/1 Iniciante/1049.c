#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char pri[30], seg[30], ter[30];
	
	scanf("%s", pri);
	scanf("%s", seg);
	scanf("%s", ter);
	
	if(strcmp(pri, "vertebrado") == 0)
	{
		if(strcmp(seg, "ave") == 0)
		{
			if(strcmp(ter, "carnivoro") == 0)
				printf("aguia\n");
			else
				printf("pomba\n");
		}
		else
		{
			if(strcmp(ter, "onivoro") == 0)
				printf("homem\n");
			else
				printf("vaca\n");
		}
	}
	else
	{
		if(strcmp(seg, "inseto") == 0)
		{
			if(strcmp(ter, "hematofago") == 0)
				printf("pulga\n");
			else
				printf("lagarta\n");
		}
		else
		{
			if(strcmp(ter, "hematofago") == 0)
				printf("sanguessuga\n");
			else
				printf("minhoca\n");
		}
	}
	
	return 0;
}