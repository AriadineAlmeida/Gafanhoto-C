#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num;
	
	printf ("digite um n�mero: ");
	scanf ("%d", & num);
	printf ("\n O Antecessor �: %d", num-1);
	printf ("\nO sucessor �: %d", num+1);
	return 0;
}
