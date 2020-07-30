#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
struct produto
{
	int cod;
	char desc [100];
	int barra;
	float preco;
	int estoque;
};
int main()
{
	printf("______________________________\n");
	printf("Cadastro de novo produto \n");
	printf("______________________________\n");
	struct produto ficha;
	printf("\n Digite o codigo do produto: ");
	scanf("%d", &ficha.cod);
	fflush (stdin);
	printf("\n Digite a descrição do produto: ");
	gets(ficha.desc);
	fflush (stdin);
	print("\n Digite o codigo de barras do produto: ");
	scanf("%d", &ficha.barra);
	fflush(stdin);
	printf("\n Digite o preço do produto: ");
	scan("%f", &ficha.preco);
	fflush(stdin);
	printf("Digite o saldo do protudo em estoque");
	scanf("%d", &ficha.estoque);
	fflush(stdin);
	
	Printf("\n O produto cadastrado foi : %d", ficha.desc);
	Printf("\n Cod. de barra: %d", ficha.barra);
	printf("\n Está cadastrado com o cod. : %d", ficha.cod);
	printf("\n Foi pago R$: %f", ficha.preco);
	printf("\n Existem %d, produtos em estoque", ficha.estoque);
	
	return(0);
}
