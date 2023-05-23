/*
 * ex015.c
 *
 *  Criado em: 22 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 20

int main(){

	int vetor[TAMANHO];
	int vetorUnico[TAMANHO];
	int tamanhoVetorUnico = 0;
	char ordinal = 176; //Tabela ASCII

	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Valor do Vetor de 20 Posicoes: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}

	//Verifica e adiciona elementos unicos ao vetorUnico
	for (int i = 0; i < TAMANHO; i ++){
		int elementoRepetido = 0;

		for (int j = 0; j < tamanhoVetorUnico; j ++){
			if (vetor[i] == vetorUnico[j]){
				elementoRepetido = 1;
				break;
			}
		}

		if(!elementoRepetido){
			vetorUnico[tamanhoVetorUnico] = vetor[i];
			tamanhoVetorUnico ++;
		}
	}

	printf("\nElementos do Vetor sem Repeticao:\n");
	for (int i = 0; i < tamanhoVetorUnico; i ++){
		printf("%d ", vetorUnico[i]);
	}

	printf("\n");

	return 0;
}
