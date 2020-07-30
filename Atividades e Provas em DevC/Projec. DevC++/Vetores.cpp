#include<stdio.h>
int main()
{
	int vet [10];
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("\n Digite o %d elemento: ", i);
		scanf("%d", &vet [i]);
	}
	printf("Vetor preenchido. \n");
	for (i = 0; i < 10; i++){
		printf("d% | ", vet);
	}
	return(0);
}
