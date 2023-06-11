/*
 * ex029.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numeros[6];
	int somaPares = 0;
	int contPares = 0;
	int contImpares = 0;
	char ordinal = 176; //Tabela ASCII

	for (int i = 0; i < 6; i ++){
		printf("Digite o %d%c Numero Inteiro:\n", i + 1 , ordinal);
		fflush(stdout);
		scanf("%d", &numeros[i]);
	}

	printf("\nNumeros Pares Digitados:\n");
	for (int i = 0; i < 6; i ++){
		if (numeros[i] % 2 == 0){
			printf("%d\n", numeros[i]);
			somaPares += numeros[i];
			contPares ++;
		}
	}

	printf("\nSoma dos Numeros Pares: \n%d\n", somaPares);

	printf("\nNumeros Impares Digitados:\n");
	for (int i = 0; i < 6; i ++){
		if(numeros[i] % 2 != 0){
			printf("%d\n", numeros[i]);
			contImpares ++;
		}
	}

	printf("\nQuantidade de Numeros Impares: \n%d\n", contImpares);

	return 0;
}
