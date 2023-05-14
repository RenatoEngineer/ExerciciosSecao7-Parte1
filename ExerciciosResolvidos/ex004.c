/*
 * ex004.c
 *
 *  Criado em: 14 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */
#include <stdio.h>

int main(){

	int vetor[8];
	int X, Y;

	printf("Digite os Valores do Vetor de 8 Posicoes:\n");
	fflush(stdout);
	for(int i = 0; i < 8; i ++){
		scanf("%d", &vetor[i]);
	}

	printf("\nDigite o Valor de X (entre 0 e 7): ");
	fflush(stdout);
	scanf("%d", &X);

	printf("Digite o Valor de Y (entre 0 e 7): ");
	fflush(stdout);
	scanf("%d", &Y);

	int soma = vetor[X] + vetor[Y];

	printf("\nA Soma dos Valores nas Posicoes %d e %d e: %d\n", X, Y, soma);

	return 0;
}
