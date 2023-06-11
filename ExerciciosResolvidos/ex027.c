/*
 * ex027.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){

	int vetor[10];
	bool encontrado = false;
	char ordinal = 176;

	for (int i = 0; i < 10; i ++){
		printf("Digite o %d%c Numero Inteiro:\n", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}

	printf("\nNumeros Primos encontrados e suas Posicoes no Vetor:\n");
	for (int i = 0; i < 10; i ++){
		bool primo = true;

		//Verifica se o Numero e menor ou igual a 1
		if (vetor[i] <= 1){
			primo = false;
		}else{
			//Verifica se o numero e divisivel por algum numero entre 2 e sua raiz quadrada
			for (int j = 2; j <= sqrt(vetor[i]); j ++){
				if (vetor[i] % j == 0){
					primo = false;
				}
			}
		}

		//Se o numero for primo, imprime seu valor e posicao no vetor
		if (primo){
			printf("%d (Posicao %d)\n", vetor[i], i);
			encontrado = true;
		}
	}

	if (!encontrado){
		printf("Nao foram encontrados Numeros Primos!");
	}

	return 0;
}
