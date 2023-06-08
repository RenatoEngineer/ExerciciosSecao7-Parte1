/*
 * ex020.c
 *
 *  Criado em: 8 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 10

int main(){

	int vetor1[TAMANHO];
	int vetor2[TAMANHO];
	int contador = 0;
	char ordinal = 176;

	printf("Digite 10 Numeros Inteiros no intervalo [0, 50]:\n");
	for (int i = 0; i < TAMANHO; i ++){
		do {
			printf("Digite o %d%c Numero: ", i + 1, ordinal);
			fflush(stdout);
			scanf("%d", &vetor1[i]);
		}while (vetor1[i] < 0 || vetor1[i] > 50);
	}

	for (int i = 0; i < TAMANHO; i ++){
		if (vetor1[i] % 2 != 0){ // Verifica se o numero e impar
			vetor2[contador] = vetor1[i]; // Armazena o numero impar no vetor2
			contador ++; //Incrementa o contador
		}
	}

	// Impressao do vetor1 com 2 elementos por linha
	printf("\nVetor 1 (Numeros Digitados):\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("%d ", vetor1[i]);
		if ((i + 1) % 2 == 0){
			printf("\n");
		}
	}

	printf("\n");

	// Impressao do vetor2 com 2 elementos por linha
	printf("\nVetor 2 (Apenas Numeros Impares):\n");
	for (int i = 0; i < contador; i ++){
		printf("%d ", vetor2[i]);
		if((i + 1) % 2 == 0){
			printf("\n");
		}
	}

	return 0;
}
