#include <windows.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>

int main(void) {
	(LC_ALL, "Portugues");
	
	char nome[20]; 
	printf ("Digite seu nome : ");
	fgets(nome, 20, stdin );
	printf("%s Seja bom vindo(a) a algoritmo e lógica de programação II ", nome);
	return 0;
}
