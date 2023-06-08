/*
 * ex021.c
 *
 *  Criado em: 8 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 10

int main(){

	int vetorA[TAMANHO];
	int vetorB[TAMANHO];
	int vetorC[TAMANHO];
	char ordinal = 176;

	printf("Digite os elementos do Vetor A (10 Numeros Inteiros):\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetorA[i]);
	}

	printf("\nDigite os elementos do Vetor B (10 Numeros Inteiros):\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetorB[i]);
	}

	//Calculo do Vetor C = A - B

	for (int i = 0; i < TAMANHO; i ++){
		vetorC[i] = vetorA[i] - vetorB[i];
	}

	printf("\nVetor C (A - B):\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("%d%c Elemento: %d\n", i + 1, ordinal, vetorC[i]);
	}

	printf("\n");

	return 0;
}
