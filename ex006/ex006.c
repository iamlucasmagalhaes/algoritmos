/*
	6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu sucessor.
	Ex:
	Digite um número: 9
	O antecessor de 9 é 8
	O sucessor de 9 é 10
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	
	printf("Digite um número: ");
	scanf("%d", &number);
	
	printf("O antecessor de %d é %d\n", number, number - 1);
	printf("O sucessor de %d é %d", number, number + 1);
	
	return 0;
}

