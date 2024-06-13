/*
	4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório entre eles.
	Ex:
	Digite um valor: 8
	Digite outro valor: 5
	A soma entre 8 e 5 é igual a 13.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fristNumber, secondNumber;
	
	printf("Digite um valor: ");
	scanf("%i", &fristNumber);
	
	printf("Digite outro valor: ");
	scanf("%i", &secondNumber);
	
	int result = fristNumber + secondNumber;
	
	printf("A soma entre %i e %i é igual a %i", fristNumber, secondNumber, result);
	
	return 0;
}

