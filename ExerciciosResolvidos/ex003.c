/*
 * ex003.c
 *
 *  Criado em: 13 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */
#include <stdio.h>
#include <math.h>

int main(){

	int tamanho = 10;

	float conjuntoOriginal [tamanho];
	float conjuntoQuadrado [tamanho];

	//Leitura do Conjunto de Numeros Reais

	printf("Digite um Conjunto de %d numeros reais:\n", tamanho);
	fflush(stdout);
	for (int i = 0; i < tamanho; i++){
		scanf("%f", &conjuntoOriginal[i]);
	}

	//Calculo do Quadrado de cada Componente e Armazenamento no outro vetor

	for (int i = 0; i < tamanho; i++){
		conjuntoQuadrado[i] = pow(conjuntoOriginal[i], 2); //Utilizando a Funcao "pow" para elevar ao quadrado
	}

	//Impressao do Conjunto Original

	printf("\nConjunto Original:\n");
	for (int i = 0; i < tamanho; i ++){
		printf("%.2f ", conjuntoOriginal[i]);
	}

	printf("\n");

	//Impressaodo Conjunto com os Quadrados

	printf("\nConjunto com os Quadrados:\n");
	for (int i = 0; i < tamanho; i ++){
		printf("%.2f ", conjuntoQuadrado[i]);
	}

	printf("\n");

	return 0;
}
