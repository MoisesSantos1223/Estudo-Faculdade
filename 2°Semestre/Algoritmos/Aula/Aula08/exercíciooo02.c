#include <stdio.h>

int main(){
	int numero[10];
	int i;
	int soma = 0;
	
	for(i=0;i<10; i++){
		printf("Digite um numero: ");
		scanf("%d", &numero[i]);
		soma += numero[i];
	}
	printf("A soma eh: %d", soma);
	
	return 0;
}

