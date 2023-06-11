/*
 * ex031.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 10

int main(){

	int vetor1[TAMANHO];
	int vetor2[TAMANHO];
	int vetorUniao[2 * TAMANHO]; //Tamanho Maximo da Uniao
	int tamanhoUniao = 0;
	char ordinal = 176; //Tabela ASCII

	printf("Elementos do Primeiro Vetor (10 Elementos)\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor1[i]);
	}

	printf("\nElementos do Segundo Vetor (10 Elementos)\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor2[i]);
	}

	//Adiciona Elementos do Vetor 1 ao Vetor Uniao
	for (int i = 0; i < TAMANHO; i ++){
		int elemento = vetor1[i];
		int repetido = 0;

		//Verifica se o Elemento ja Existe na Uniao
		for (int j = 0; j < tamanhoUniao; j ++){
			if (vetorUniao[j] == elemento){
				repetido = 1;
				break;
			}
		}

		//Se o elemento nao estiver repetido, adiciona ao Vetor Uniao
		if (!repetido){
			vetorUniao[tamanhoUniao] = elemento;
			tamanhoUniao ++;
		}
	}

	//Adiciona Elementos do Vetor 2 ao Vetor Uniao
	for (int i = 0; i < TAMANHO; i ++){
		int elemento = vetor2[i];
		int repetido = 0;

		//Verifica se o Elemento ja existe no Vetor Uniao
		for (int j = 0; j < tamanhoUniao; j ++){
			if (vetorUniao[j] == elemento){
				repetido = 1;
				break;
			}
		}

		//Se o Elemento nao estiver repetido, adiciona ao Vetor Uniao
		if (!repetido){
			vetorUniao[tamanhoUniao] = elemento;
			tamanhoUniao ++;
		}
	}

	//Imprime a Uniao dos Vetores
	printf("\nUniao dos Vetores:\n");
	for (int i = 0; i < tamanhoUniao; i ++){
		printf("%d ", vetorUniao[i]);
	}

	printf("\n");

	return 0;
}
