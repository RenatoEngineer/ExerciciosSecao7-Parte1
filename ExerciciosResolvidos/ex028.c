/*
 * ex028.c
 *
 *  Criado em: 11 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int v[10];
	int v1[10];
	int v2[10];
	int cont1 = 0;		  //Contador de Elementos em V1
	int cont2 = 0; 		 //Contador de Elementos em V2
	char ordinal = 176; //Tabela ASCII

	for (int i = 0; i < 10; i ++){
		printf("Digite o %d%c Numero Inteiro:\n", i + 1, ordinal);
		fflush(stdout);
		scanf("%d", &v[i]);
	}

	//Copia Valores Impares para V1 e Valores Pares para V2
	for (int i = 0; i < 10; i ++){
		if (v[i] % 2 == 0){
			v2[cont2] = v[i];
			cont2 ++;
		}else{
			v1[cont1] = v[i];
			cont1 ++;
		}
	}

	//Escrevendo Elementos de V1
	printf("\nElementos de V1 (Impares):\n");
	for (int i = 0; i < cont1; i ++){
		printf("%d\n", v1[i]);
	}

	//Escrevendo Elementos de V2
	printf("\nElementos de V2 (Pares):\n");
	for (int i = 0; i < cont2; i ++){
		printf("%d\n", v2[i]);
	}

	return 0;
}
