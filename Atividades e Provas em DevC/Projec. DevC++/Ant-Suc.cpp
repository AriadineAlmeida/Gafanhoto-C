#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num;
	
	printf ("digite um número: ");
	scanf ("%d", & num);
	printf ("\n O Antecessor é: %d", num-1);
	printf ("\nO sucessor é: %d", num+1);
	return 0;
}
