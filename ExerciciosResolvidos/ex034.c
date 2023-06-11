/*
 * ex034.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 10

int main(){

	int vetor[TAMANHO];
	int i;
	int j;
	int numero;

	printf("Digite 10 Numeros Diferentes:\n");
	for (i = 0; i < TAMANHO; i ++){
		printf("Numero %d: ", i + 1);
		fflush(stdout);
		scanf("%d", &numero);

		for (j = 0; j < i; j ++){
			if (vetor[j] == numero){
				printf("Numero Repetido! Digite outro Numero: ");
				fflush(stdout);
				scanf("%d", &numero);
				j = -1; //Reinicia a Verificacao a partir do inicio do Vetor
			}
		}
		vetor[i] = numero;
	}

	printf("\nVetor Final: ");
	for (i = 0; i < TAMANHO; i ++){
		printf("%d ", vetor[i]);
	}

	return 0;
}
