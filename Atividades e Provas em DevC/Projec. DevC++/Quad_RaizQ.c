#include <stdio.h>
#include <math.h>
#include <Locale.h>
int main () {
	
	(LC_ALL, "Portugues")
	
	int n1;
	/* o erro de conando continua e ainda n�o sei o porque?*/
	
	printf("Digite um n�mero intero e postivo : \n");
	scanef("%d", &n1);
	printf("\n Se elevarmos %d ao quadrado o resultado � %.2f", n1 pow (n1, 2));
	printf("A potencia de %d � %.2f \n  ", n1 sqrt (n1));
	
	return (0)
	
}
