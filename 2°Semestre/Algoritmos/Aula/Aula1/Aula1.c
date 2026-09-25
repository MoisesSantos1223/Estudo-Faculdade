#include <stdio.h>

int main(){
	int opcao;
	printf("\n1 - Norte \n2 - Sul \n3 - Leste \n4 - Oeste");
	print("Selecione umas das opcoes: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("Norte");
			break;
		case 2:
			printf("Sul");
			break;
		case 3:
			printf("Leste");
			break;
		case 4:
			printf("Oeste");
				break;
		default:
			printf("Direção invalida");
			break;
	}
}