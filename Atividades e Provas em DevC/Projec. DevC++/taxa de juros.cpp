#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float num1, num2, total;
	
	printf("informe o primeiro numero: ");
	scanf ("%f", &num1);
	printf("\n Informe o segundo numero: ");
	scanf ("%f", &num2);
	total = pow(num1, num2);
	printf ("\n %.2f elevado a %.2f � :%.2f", num1, num2, total);
	
	return 0;
}
