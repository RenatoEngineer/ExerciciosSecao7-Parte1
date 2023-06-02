/*
 * ex016.c
 *
 *  Criado em: 2 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 5

int main() {
    float vetor[TAMANHO];
    int codigo;
    char ordinal = 176; //Tabela ASCII

    for (int i = 0; i < TAMANHO; i++) {
    	printf("Digite o %d%c Valor do Vetor de 5 posições:\n", i + 1, ordinal);
    	fflush(stdout);
        scanf("%f", &vetor[i]);
    }

    printf("\nDigite o código (0, 1 ou 2):\n");
    fflush(stdout);
    scanf("%d", &codigo);

    switch (codigo){
    case 0:
    	printf("\nPrograma Finalizado!\n");
    	break;

    case 1:
    	printf("\nVetor na Ordem Direta:\n");
    	for (int i = 0; i < TAMANHO; i ++){
    		printf("%.2f ", vetor[i]);
    	}
    	printf("\n");
    	break;

    case 2:
    	printf("\nVetor na Ordem Inversa:\n");
    	for (int i = TAMANHO - 1; i >= 0; i --){
    		printf("%.2f ", vetor[i]);
    	}
    	printf("\n");
    	break;

    default:
    	printf("\nCodigo Invalido!\n");
    	break;
    }

    return 0;
}

