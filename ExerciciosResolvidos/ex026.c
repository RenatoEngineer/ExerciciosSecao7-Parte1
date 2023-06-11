/*
 * ex026.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>
#include <math.h>

#define TAMANHO 10

int main(){

	int vetor[TAMANHO];
	float media = 0;
	float somaQuadrados = 0;
	float desvioPadrao = 0;
	char ordinal = 176; //Tabela ASCII

	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento do Vetor:\n", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor[i]);
		media += vetor[i];
	}

	media /= TAMANHO;

	for (int i = 0; i < TAMANHO; i ++){
		float diferenca = vetor[i] - media;
		somaQuadrados += diferenca * diferenca;
	}

	desvioPadrao = sqrt(somaQuadrados / TAMANHO);

	printf("Desvio Padrao d Vetor: %.2f\n", desvioPadrao);

	return 0;
}
