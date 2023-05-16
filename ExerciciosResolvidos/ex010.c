/*
 * ex010.c
 *
 *  Criado em: 15 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define ALUNOS 15

int main(){

	float notas[ALUNOS];
	float soma = 0;
	float media;

	printf("Digite a nota dos %d Alunos:\n", ALUNOS);
	fflush(stdout);
	for (int i = 0; i < ALUNOS; i ++){
		scanf("%f", &notas[i]);
		soma += notas[i];
	}

	media = soma / ALUNOS;

	printf("A media geral e: %.2f", media);

	return 0;
}
