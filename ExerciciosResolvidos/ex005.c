/*
 * ex005.c
 *
 *  Criado em: 14 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */
#include <stdio.h>

int main(){

	int vetor[10];
	int contadorPares = 0;

	printf("Digite os Valores do Vetor de 10 Posicoes: \n");
	fflush(stdout);
	for (int i = 0; i < 10; i ++){
		scanf("%d", &vetor[i]);
	}

	for (int i = 0; i < 10; i ++){
		if (vetor[i] % 2 == 0){
			contadorPares ++;
		}
	}

	printf("\nO Vetor Possui %d Valores Pares.", contadorPares);

	return 0;
}
