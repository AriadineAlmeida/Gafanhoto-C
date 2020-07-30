#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int cont;
	float x;
	Printf("Digite um Valor: \n");
	Scanf("%f", &x);
	for(cont=1; cont<=3; cont++){
		x = x/2;
	}
	printf("%0.0f", x);
	return (0);
}
