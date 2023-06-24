/*
 * ex039.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int triangulo[30][30];

	printf("Digite um Numero Inteiro Positivo entre 1 e 30: "); //Para nao estourar a variavel Inteira
	fflush(stdout);
	scanf("%d", &numero);

	//Inicializa o Triangulo de Pascal
	for (int i = 0; i < numero; i ++){
		triangulo[i][0] = 1;
		triangulo[i][i] = 1;

		for (int j = 1; j < i; j ++){
			triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
		}
	}

	printf("\nTriangulo de Pascal:\n");
	for (int i = 0; i < numero; i ++){
		for (int j = 0; j <= i; j ++){
			printf("%d ", triangulo[i][j]);
		}
		printf("\n");
	}

	return 0;
}
