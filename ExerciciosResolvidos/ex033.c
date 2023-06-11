/*
 * ex033.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 15

int main(){

	int vetor[TAMANHO];
	int i;
	int j;
	int posicaoAtual = 0;
	char ordinal = 176;

	printf(".:: Vetor de 15 Elementos ::.\n\n");
	for (i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}

	printf("\nVetor Original: ");
	for (i = 0; i < TAMANHO; i ++){
		printf("%d ", vetor[i]);
	}

	for (i = 0; i < TAMANHO; i ++){
		if (vetor[i] != 0){
			vetor[posicaoAtual] = vetor[i];
			posicaoAtual ++;
		}
	}

	for (j = posicaoAtual; j < TAMANHO; j ++){
		vetor[j] = 0;
	}

	printf("\nVetor Compactado: ");
	for (i = 0; i < TAMANHO; i ++){
		printf("%d ", vetor[i]);
	}

	return 0;
}
