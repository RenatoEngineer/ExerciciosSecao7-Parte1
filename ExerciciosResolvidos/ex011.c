/*
 * ex011.c
 *
 *  Criado em: 16 de mai de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	float numeros[10];
	int contaNegativos = 0;
	float somaPositivos = 0;

	printf("Digite 10 Numeros Reais:\n");
	fflush(stdout);
	for (int i = 0; i < 10; i ++){
		scanf("%f", &numeros[i]);

		if (numeros[i] < 0){
			contaNegativos ++;
		}else{
			somaPositivos = somaPositivos + numeros[i];
		}
	}

	printf("\nQuantidade de Numeros Negativos: %d", contaNegativos);
	printf("\nSoma dos Numeros Positivos: %.2f", somaPositivos);

	return 0;
}
