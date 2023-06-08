/*
 * ex023.c
 *
 *  Criado em: 8 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	float vetor1[5];
	float vetor2[5];
	float produto_escalar = 0.0;
	int i;

	//Lendo os Valores do Primeiro Vetor
	printf("Digite os Valores do Primeiro Vetor:\n");
	for (i = 0; i < 5; i ++){
		printf("Posicao %d: ", i + 1);
		fflush(stdout);
		scanf("%f", &vetor1[i]);
	}

	//Lendo os Valores do Segundo Vetor
	printf("\nDigite os Valores do Segundo Vetor:\n");
	for (i = 0; i < 5; i ++){
		printf("Posicao %d: ", i + 1);
		fflush(stdout);
		scanf("%f", &vetor2[i]);
	}

	//Calculando o Produto Escalar
	for (i = 0; i < 5; i ++){
		produto_escalar += vetor1[i] * vetor2[i];
	}

	//Imprimindo os dois Conjuntos
	printf("\nPrimeiro Vetor:\n");
	for (i= 0; i < 5; i ++){
		printf("%.2f ", vetor1[i]);
	}

	printf("\n\nSegundo Vetor:\n");
	for (i = 0; i < 5; i ++){
		printf("%.2f ", vetor2[i]);
	}

	//Imprimindo o Produto Escalar
	printf("\n\nProduto Escalar: %.2f\n", produto_escalar);

	return 0;
}
