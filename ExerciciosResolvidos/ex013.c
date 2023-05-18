/*
 * ex013.c
 *
 *  Criado em: 17 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int valores[5];
	int maior, menor, posicaoMaior, posicaoMenor;

	printf("Digite 5 Valores:\n");
	fflush(stdout);
	for (int i = 0; i < 5; i ++){
		scanf("%d", &valores[i]);

		if (i == 0){
			maior = menor = valores[i];
			posicaoMaior = posicaoMenor = i;
		}else{
			if (valores[i] > maior){
				maior = valores[i];
				posicaoMaior = i;
			}
			if (valores[i] < menor){
				menor = valores[i];
				posicaoMenor = i;
			}
		}
	}

	printf("\nPosicao do Maior Valor: %d\n", posicaoMaior);
	printf("Posicao do Menor Valor: %d", posicaoMenor);

	return 0;
}
