/*
 * ex007.c
 *
 *  Criado em: 15 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int vetor[10];
	int maior, posicao;

	printf("Digite 10 numeros inteiros:\n");
	fflush(stdout);
	for (int i = 0; i < 10; i ++){
		scanf("%d", &vetor[i]);
	}

	maior = vetor[0];
	posicao = 0;

	for (int i = 1; i < 10; i ++){
		if (vetor[i] > maior){
			maior = vetor[i];
			posicao = i;
		}
	}

	printf("\nVetor: ");
	for (int i = 0; i < 10; i ++){
		printf("%d ", vetor[i]);
	}

	printf("\n");

	printf("Maior elemento: %d\n", maior);
	printf("Posicao do Maior Elemento: %d", posicao);

	return 0;
}
