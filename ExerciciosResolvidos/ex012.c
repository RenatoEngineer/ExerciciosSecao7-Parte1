/*
 * ex012.c
 *
 *  Criado em: 16 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int valores[5];
	int maior;
	int menor;
	int soma = 0;
	float media;

	printf("Digite 5 Valores:\n");
	fflush(stdout);
	for (int i = 0; i < 5; i ++){
		scanf("%d", &valores[i]);
		soma += valores[i];

		if (i == 0){
			maior = menor = valores[i];
		}else{
			if (valores[i] > maior){
				maior = valores[i];
			}
			if (valores[i] < menor){
				menor = valores[i];
			}
		}
	}

	media = (float)soma / 5;

	printf("\nValores Lidos: ");
	for (int i = 0; i < 5; i ++){
		printf("%d ", valores[i]);
	}

	printf("\n");

	printf("Maior Valor: %d\n", maior);
	printf("Menor Valor: %d\n", menor);
	printf("Media dos Valores: %.2f", media);

	return 0;
}
