/*
 * ex022.c
 *
 *  Criado em: 8 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int vetor1[10];
	int vetor2[10];
	int vetor3[20];
	int i;

	//Lendo os valores do Primeiro Vetor
	printf("Digite os Valores do Primeiro Vetor:\n");
	for (i = 0; i < 10; i ++){
		printf("Posicao %d: ", i);
		fflush(stdout);
		scanf("%d", &vetor1[i]);
	}

	//Lendo os valores do Segundo Vetor
	printf("\nDigite os Valores do Segundo Vetor:\n");
	for (i = 0; i < 10; i ++){
		printf("Posicao %d: ", i);
		fflush(stdout);
		scanf("%d", &vetor2[i]);
	}

	//Calculando o Terceiro Vetor
	for (i = 0; i < 10; i ++){
		vetor3[2 * i] = vetor1[i];		//Posicoes Pares
		vetor3[2 * i + 1] = vetor2[i]; //Posicoes Impares
	}

	//Imprimindo o Terceiro Vetor
	printf("\nTerceiro Vetor \nPosicoes Pares: Primeiro Vetor \nPosicoes Impares: Segundo Vetor:\n\n");
	for (i = 0; i < 20; i ++){
		printf("%d ", vetor3[i]);
	}

	return 0;
}
