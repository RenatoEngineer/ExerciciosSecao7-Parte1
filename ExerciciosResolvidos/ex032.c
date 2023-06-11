/*
 * ex032.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 5

int main(){

	int x[TAMANHO];
	int y[TAMANHO];
	int resultado[TAMANHO * 2]; //Tamanho Maximo da Uniao
	int tamanhoResultado = 0;
	char ordinal = 176; //Tabela ASCII

	printf("Elementos do Vetor x (5 Elementos)\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &x[i]);
	}

	printf("\nElementos do Vetor y (5 Elementos)\n");
	for (int i = 0; i < TAMANHO; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &y[i]);
	}

	printf("\nSoma entre x e y: ");
	for (int i = 0; i < TAMANHO; i ++){
		resultado[i] = x[i] + y[i];
		printf("%d ", resultado[i]);
	}

	printf("\n\nProduto entre x e y: ");
	for (int i = 0; i < TAMANHO; i ++){
		resultado[i] = x[i] * y[i];
		printf("%d ", resultado[i]);
	}

	printf("\n\nDiferenca entre x e y: ");
	tamanhoResultado = 0;
	for (int i = 0; i < TAMANHO; i ++){
		int presenteEmY = 0;
		for (int j = 0; j < TAMANHO; j ++){
			if (x[i] == y[j]){
				presenteEmY = 1;
				break;
			}
		}
		if (!presenteEmY){
			resultado[tamanhoResultado] = x[i];
			tamanhoResultado ++;
		}
	}

	for (int i = 0; i < tamanhoResultado; i ++){
		printf("%d ", resultado[i]);
	}

	printf("\n\nIntersecao entre x e y: ");
	tamanhoResultado = 0;
	for (int i = 0; i < TAMANHO; i ++){
		for (int j = 0; j < TAMANHO; j ++){
			if (x[i] == y[j]){
				resultado[tamanhoResultado] = x[i];
				tamanhoResultado ++;
				break;
			}
		}
	}
	for (int i = 0; i < tamanhoResultado; i ++){
		printf("%d ", resultado[i]);
	}

	printf("\n\nUniao entre x e y: ");
	tamanhoResultado = 0;
	for (int i = 0; i < TAMANHO; i ++){
		resultado[tamanhoResultado] = x[i];
		tamanhoResultado ++;
	}
	for (int i = 0; i < TAMANHO; i ++){
		int presenteEmX = 0;
		for (int j = 0; j < TAMANHO; j ++){
			if (y[i] == x[j]){
				presenteEmX = 1;
				break;
			}
		}
		if (!presenteEmX){
			resultado[tamanhoResultado] = y[i];
			tamanhoResultado ++;
		}
	}
	for (int i = 0; i < tamanhoResultado; i ++){
		printf("%d ", resultado[i]);
	}

	return 0;
}
