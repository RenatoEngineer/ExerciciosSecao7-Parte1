/*
 * ex001.c
 *
 *  Criado em: 10 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */
#include <stdio.h>

int main(){

	int A[6] = {1, 0, 5, -2, -5, 7};

	//Soma dos valores de A[0], A[1] e A[5]
	int soma = A[0] + A[1] + A[5];
	printf("Soma: %d\n", soma);

	//Modificando o Valor de A[4]
	A[4] = 100;

	//Exibindo cada Valor de A
	printf("Valores do vetor A:\n");
	for(int i = 0; i < 6; i ++){
		printf("%d\n", A[i]);
	}

	return 0;
}
