/*
 * ex018.c
 *
 *  Criado em: 5 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 10

int main(){

	int vetor[TAMANHO];
	int multiplo;
	int contador = 0;
	char ordinal = 176; //Tabela ASCII

	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento do Vetor de 10 Posicoes:\n", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}

	printf("\nDigite um Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &multiplo);

	printf("\nMultiplos de %d no Vetor:\n", multiplo);
	for (int i = 0; i < TAMANHO; i ++){
		if (vetor[i] % multiplo == 0){
			printf("%d\n", vetor[i]);
			contador ++;
		}
	}

	if (contador == 0){
		printf("\nNao foram encontrados multiplos de %d no Vetor.", multiplo);
	}

	return 0;
}
