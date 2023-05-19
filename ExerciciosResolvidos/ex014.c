/*
 * ex014.c
 *
 *  Criado em: 18 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int vetor[10];

	for (int i = 0; i < 10; i ++){
		printf("Digite o Valor da Posicao %d: ", i);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}

	int temValoresIguais = 0; //Variavel para indicar se existem valores iguais

    // Verifica se existem valores iguais no vetor
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                temValoresIguais = 1;
                printf("\nValores iguais encontrados: %d\n", vetor[i]);
            }
        }
    }

    if (!temValoresIguais) {
        printf("\nNao foram encontrados Valores Iguais.\n");
    }

	return 0;
}
