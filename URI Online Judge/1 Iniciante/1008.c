#include <stdio.h>

int main() {
    int NumFunc, HrTrab;
	float RecebHr, Salario;
	
	scanf("%d%d%f", &NumFunc, &HrTrab, &RecebHr);
	
	Salario = HrTrab * RecebHr;
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", NumFunc, Salario);
		
    return 0;
}