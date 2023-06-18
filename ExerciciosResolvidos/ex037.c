/*
 * ex037.c
 *
 *  Criado em: 18 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 10

int main(){

	float vetor[TAMANHO];
	char ordinal = 176; //Tabela ASCII

	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento do Vetor: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%f", &vetor[i]);
	}

	for (int i = 0; i < TAMANHO - 1; i ++){
		for (int j = i + 1; j < TAMANHO; j ++){
			if (vetor[j] < vetor[i]){
				float temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}

	printf("\nVetor Ordenado:\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("%.2f ", vetor[i]);
	}

	return 0;
}
