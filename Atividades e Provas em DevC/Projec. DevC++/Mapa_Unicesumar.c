//Mapa Unicesumar
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>
#define tam 5

struct contatos{
	int cod;
	char nome[100];
	char tel[100];
	char email[100];

};

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc, cont = 0, i;
	struct contatos pessoa[tam];

	do{
		printf("\n1 - Inserir um novo cadastro \n");
		printf("2 - Mostrar todos os cadastros \n");
		printf ("0 - Sair \n");
		printf("Digite a opção desejada: \n");
		scanf("%d", &opc);
		printf("\n");
		fflush(stdin);

		switch(opc){
			case 1:
			if(cont <= 4 ){
				printf("Código: %d\n",cont +1);
				printf("Informe o nome: ");
				fgets(pessoa[cont].nome, 100, stdin);
				fflush(stdin);
				printf("Informe o email: ");
				fgets(pessoa[cont].email, 100, stdin);
				printf("Informe o telefone: ");
				fgets(pessoa[cont].tel, 100, stdin);
				fflush(stdin);
				printf("\n");
				cont++;
			}
			
			else{
				system("cls");
				printf("\nAgenda Lotada...\n\n");
			}
			break;
			case 2:
			if(cont == 0){
				system("cls");
				printf("\nAgenda Vazia....\n\n");
			} 
			else{
				system ("cls");
				printf("LISTA DE CONTATOS\n");
				for(i=0; i<cont; i++){
					printf("_____________________________\n");
					printf("\nCódigo: %d\n", i+1);
					printf("Nome: %s", pessoa[i].nome);
					printf("Email: %s", pessoa[i].email);
					printf("Telefone: %s\n", pessoa[i].tel);
				}
			}	
			break;
			case 0:
				system("cls");
			printf("\nEncerramento do Programa!! \n");
			break;
			default:
				system("cls");
			printf("\nERRO: Digite uma opção válida!! \n\n");
		}
	}
	while(opc != 0);
	return(0);
}
