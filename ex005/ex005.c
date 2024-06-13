/*
	5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre na tela a sua média na disciplina.
	Ex:
	Nota 1: 4.5
	Nota 2: 8.5
	A média entre 4.5 e 8.5 é igual a 6.5
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	float fristTestGrade, secondTestGrade;
	
	printf("Nota 1: ");
	scanf("%f", &fristTestGrade);
	
	printf("Nota 2: ");
	scanf("%f", &secondTestGrade);
	
	float mean = (fristTestGrade + secondTestGrade) / 2;
	
	printf("A média entre %.2f e %.2f é igual a %.2f", fristTestGrade, secondTestGrade, mean);
	
	return 0;
}

