#include <stdio.h>
#include <stdlib.h>
int main(void){
	int matrizA [3][3];
	int i, j, soma;
	soma = 0;
	for (i=0; i<3; i++){
			for (j=0; j<3; j++){
			printf("\n Insira o elemento da linha %d e da coluna %d: ", i,j);
			scanf("%d", &matrizA[i][j]);
			soma = soma + matrizA[i][j];
			printf("\n o resultado da soma é %d: ",soma);
			
		}
	}
	return(0);
}
