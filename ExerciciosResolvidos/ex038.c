/*
 * ex038.c
 *
 *  Criado em: 24 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	float vetor[10];
	float valor;
	int tamanhoAtualVetor = 0;
	char ordinal = 176;

	for (int i = 0; i < 10; i ++){
		printf("Digite o %d%c Numero de 10: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%f", &valor);

		//Encontra a posicao de Insercao do Valor no Vetor
		int posicao = 0;
		while (posicao < tamanhoAtualVetor && vetor[posicao] < valor){
			posicao ++;
		}

		//Desloca os Elementos Maiores uma Posicao pra Frente
		for (int j = tamanhoAtualVetor; j > posicao; j --){
			vetor[j] = vetor[j - 1];
		}

		vetor[posicao] = valor; //Insere o Valor na Posicao correta
		tamanhoAtualVetor ++; //Incrementa o tamanho atual do vetor
	}

	printf("\nValores ordenados:\n");
	for (int i = 0; i < 10; i ++){
		printf("%.2f ", vetor[i]);
	}

	return 0;
}
