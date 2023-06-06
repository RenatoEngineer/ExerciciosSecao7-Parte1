/*
 * ex019.c
 *
 *  Criado em: 6 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int vetor[50];

	for (int i = 0; i < 50; i ++){
		vetor[i] = (i + 5 * i) % (i + 1);
	}

	printf("Vetor Preenchido:\n");
	for (int i = 0; i < 50; i ++){
		printf("%d ", vetor[i]);
	}

	printf("\n");

	return 0;
}
