/*
 * ex009.c
 *
 *  Criado em: 15 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int valores [6];

	printf("Digite 6 Valores Inteiros Pares:\n");
	fflush(stdout);
	for (int i = 0; i < 6; i ++){
		scanf("%d", &valores[i]);

		//Verifica se o Valor lido e impar, se for, solicita um novo valor

		while (valores[i] % 2 != 0){
			printf("Valor Invalido! Digite um Valor Inteiro Par:\n");
			fflush(stdout);
			scanf("%d", &valores[i]);
		}
	}

	printf("\nValores lidos na Ordem Inversa:\n");
	for (int i = 5; i >= 0; i --){
		printf("%d\n", valores[i]);
	}

	printf("\n");

	return 0;
}
