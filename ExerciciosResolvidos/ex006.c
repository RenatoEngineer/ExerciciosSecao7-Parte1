/*
 * ex006.c
 *
 *  Criado em: 14 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */
#include <stdio.h>

int main(){

	int vetor[10];
	int maior, menor;

	printf("Digite os Valores do Vetor de 10 Posicoes:\n");
	fflush(stdout);
	for (int i = 0; i < 10; i ++){
		scanf("%d", &vetor[i]);
	}

	//Inicializa o maior e o menor com o primeiro Elemento do Vetor
	maior = vetor[0];
	menor = vetor[0];

	//Percorre o vetor para encontrar maior e o menor elemento
	for (int i = 1; i < 10; i ++){
		if (vetor[i] > maior){
			maior = vetor[i];
		}

		if (vetor[i] < menor){
			menor = vetor[i];
		}
	}

	printf("\nMaior Elemento: %d", maior);
	printf("\nMenor Elemento: %d", menor);

	return 0;
}
