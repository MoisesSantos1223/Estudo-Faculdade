#include <stdio.h>

int main(){
	float notas[4];
	float soma =0;
	int i;
	
	for(i=0; i<4; i++){
		printf("Nota");
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	printf("Media=%2f", soma/4);
}
