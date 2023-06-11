/*
 * ex030.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int vetor1[10];
	int vetor2[10];
	int vetorIntersecao[10];
	int tamanhoIntersecao = 0;
	char ordinal = 176;

	printf("Elementos do Primeiro Vetor (10 Elementos):\n");
	for (int i = 0; i < 10; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor1[i]);
	}

	printf("\nElementos do Segundo Vetor (10 Elementos):\n");
	for (int i = 0; i < 10; i ++){
		printf("Digite o %d%c Elemento: ", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor2[i]);
	}

	//Verificando a Intersecao entre os Vetores

	for (int i = 0; i < 10; i ++){
		for (int j = 0; j < 10; j ++){
			if (vetor1[i] == vetor2[j]){
				//Verifica se o Elemento ja esta no Vetor de Intersecao
				int repetido = 0;
				for (int k = 0; k < tamanhoIntersecao; k ++){
					if (vetorIntersecao[k] == vetor1[i]){
						repetido = 1;
						break;
					}
				}
				if (!repetido){
					vetorIntersecao[tamanhoIntersecao] = vetor1[i];
					tamanhoIntersecao ++;
				}
			}
		}
	}

	if(tamanhoIntersecao == 0){
		printf("\nNao ha Intersecao entre os Vetores 1 e 2!\n");
	}else{
		printf("\nElementos da Intersecao:\n");
		for (int i = 0; i < tamanhoIntersecao; i ++){
			printf("%d\n", vetorIntersecao[i]);
		}
	}

	return 0;
}
