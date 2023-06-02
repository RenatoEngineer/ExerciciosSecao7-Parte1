/*
 * ex017.c
 *
 *  Criado em: 2 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 10

int main(){

	int vetor[TAMANHO];
	char ordinal = 176; //Tabela ASCII

	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Valor do Vetor de 10 Posicoes:\n", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}

	//Atribui Valor 0 aos Elementos Negativos

	for (int i = 0; i < TAMANHO; i ++){
		if (vetor[i] < 0){
			vetor[i] = 0;
		}
	}

	printf("\nVetor apos a Atribuicao:\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("%d ", vetor[i]);
	}
	printf("\n");

	return 0;
}
