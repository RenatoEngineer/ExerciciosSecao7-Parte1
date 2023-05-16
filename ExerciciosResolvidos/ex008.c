/*
 * ex008.c
 *
 *  Criado em: 15 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */
#include <stdio.h>

int main(){

	int valores[6];

	printf("Digite 6 Valores Inteiros:\n");
	fflush(stdout);
	for (int i = 0; i < 6; i ++){
		scanf("%d", &valores[i]);
	}

	printf("\nValores Digitados na Ordem Inversa:\n");
	for (int i = 5; i >= 0; i --){
		printf("%d\n", valores[i]);
	}

	return 0;
}
