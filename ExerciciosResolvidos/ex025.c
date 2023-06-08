/*
 * ex025.c
 *
 *  Criado em: 8 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int vetor[100];
	int contador = 0;
	int numero = 1;

	while (contador < 100){
		if (numero % 7 != 0 && numero % 10 != 7){
			vetor[contador] = numero;
			contador ++;
		}
		numero ++;
	}

	printf("Vetor Preenchido com os 100 Primeiros Numeros Naturais \nque nao sao Multiplos de 7 ou nao Terminam com 7\n\n");
	for (int i = 0; i < 100; i ++){
		printf("%d ", vetor[i]);
	}
	printf("\n");

	return 0;
}
