/*
 * ex002.c
 *
 *  Criado em: 11 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */
#include <stdio.h>

int main(){

	int valores[6];

	printf("Digite 6 valores inteiros:\n");
	fflush(stdout);

	//Lê os valores digitados pelo usuário

	for(int i = 0; i < 6; i ++){
		scanf("%d", &valores[i]);
	}

	printf("\nValores digitados:\n");

	//Exibe os valores lidos na tela

	for(int i = 0; i < 6; i ++){
		printf("%d\n", valores[i]);
	}

	return 0;
}
