#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char dia[5];
	int di, hi, mi, si, df, hf, mf, sf, dr, hr, mr, sr, sit, sft, st;
	
	scanf("%s %d", dia, &di);
	scanf("%d : %d : %d", &hi, &mi, &si);
	
	scanf("%s %d", dia, &df);
	scanf("%d : %d : %d", &hf, &mf, &sf);
	
	sit = di * 86400 + hi * 3600 + mi * 60 + si;
	sft = df * 86400 + hf * 3600 + mf * 60 + sf;
	
	st = sft - sit;
	
	if(st >= 60)
	{
		dr = st / 86400;
		hr = (st % 86400) / 3600;
		mr = ((st % 86400) % 3600) / 60;
		sr = ((st % 86400) % 3600) % 60;
	}
	
	printf("%d dia(s)\n", dr);
	printf("%d hora(s)\n", hr);
	printf("%d minuto(s)\n", mr);
	printf("%d segundo(s)\n", sr);
	
	return 0;
}