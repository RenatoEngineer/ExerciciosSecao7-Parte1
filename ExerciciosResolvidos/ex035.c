/*
 * ex035.c
 *
 *  Criado em: 18 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define TAMANHO 5

int main(){

	int a;
	int b;
	int vetorA[TAMANHO];
	int vetorB[TAMANHO];
	int resultado[TAMANHO];

	//Leitura dos Numeros digitados pelo Usuario
	printf("Digite Dois Numeros (Positivos Menores que 10000): \n");
	printf("Digite o Primeiro Numero: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Digite o Segundo Numero: ");
	fflush(stdout);
	scanf("%d", &b);

	if (a >= 0 && a <= 10000 && b >= 0 && b <= 1000){ //Verifica se os numeros digitados atendem a condicao
		int i;
		for (i = 0; i < TAMANHO; i ++){
			//Obtem o digito menos significativo dos numeros e armazena nos vetores
			vetorA[i] = a % 10;
			vetorB[i] = b % 10;

			//Realiza a soma dos digitos
			resultado[i] = vetorA[i] + vetorB[i];

			//Remove o digito menos significativo dos numeros
			a /= 10;
			b /= 10;
		}

		//Impressao dos Vetores
		printf("\nVetor A: ");
		for (i = TAMANHO - 1; i >= 0; i --){
			printf("%d", vetorA[i]);
		}

		printf("\nVetor B: ");
		for (i = TAMANHO - 1; i >= 0; i --){
			printf("%d", vetorB[i]);
		}

		printf("\nSoma: ");
		for (i = TAMANHO - 1; i >= 0; i --){
			printf("%d", resultado[i]);
		}

	}else{
		printf("\nVoce Digitou um Numero Invalido!");
	}

	return 0;
}
