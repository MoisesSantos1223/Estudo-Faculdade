#include <stdio.h>

int main() {
	int idade;
	int soma = 0;
	float media; 
	int cont = 1;
	
	
	while (cont <= 5){
		printf("Digite a idade da pessoa %d: " ,cont);
		scanf("%d", &idade);
		
		soma = soma + idade;

		cont++;
	}
		media = soma / 5.0;
		printf("\nA soma das idades é: %d", soma);
		printf("\nA media das idades é: %.2f", media);
		
		return 0;
}   