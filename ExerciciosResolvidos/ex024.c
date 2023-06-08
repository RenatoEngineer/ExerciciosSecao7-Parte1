/*
 * ex024.c
 *
 *  Criado em: 8 de jun de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

#define NUM_ALUNOS 10

int main(){

	int numeros[NUM_ALUNOS];
	float alturas[NUM_ALUNOS];
	int numerosDigitados[NUM_ALUNOS] = {0}; //Vetor para rastrear Numeros Digitados
	int i;
	int j;
	int numeroAluno;
	float alturaAluno;

	for (i = 0; i < NUM_ALUNOS; i ++){
		//Le o Numero do Aluno e verifica se ja foi digitado
		do{
			printf("Digite o Numero do Aluno: ");
			fflush(stdout);
			scanf("%d", &numeroAluno);

			//Verifica se o Numero ja foi Digitado
			for (j = 0; j < NUM_ALUNOS; j ++){
				if (numerosDigitados[j] == numeroAluno){
					printf("Numero ja foi Digitado. Digite Novamente!\n\n");
					numeroAluno = 0; //Zera para Repetir a Leitura
					break;
				}
			}
		} while (numeroAluno == 0);

		numeros[i] = numeroAluno;
		numerosDigitados[i] = numeroAluno;

		printf("Digite a Altura do Aluno em Metros: ");
		fflush(stdout);
		scanf("%f", &alturaAluno);
		alturas[i] = alturaAluno;

		printf("\n");
	}

	//Encontrando o Aluno mais Baixo
	int maisBaixo = 0;
	for (i = 1; i < NUM_ALUNOS; i ++){
		if(alturas[i] < alturas[maisBaixo]){
			maisBaixo = i;
		}
	}

	//Encontrando o Aluno mais Alto
	int maisAlto = 0;
	for (i = 1; i < NUM_ALUNOS; i ++){
		if (alturas[i] > alturas[maisAlto]){
			maisAlto = i;
		}
	}

	//Imprimindo o Aluno mais Baixo
	printf(".:: Aluno mais Baixo ::.\n");
	printf("Numero do Aluno: %d\n", numeros[maisBaixo]);
	printf("Altura do Aluno: %.2f\n", alturas[maisBaixo]);

	//Imprimindo o Aluno mais Alto
	printf("\n.:: Aluno mais Alto ::.\n");
	printf("Numero do Aluno: %d\n", numeros[maisAlto]);
	printf("Altura do Aluno: %.2f\n", alturas[maisAlto]);

	return 0;
}
