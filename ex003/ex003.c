/*
	3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no final uma mensagem.
	Ex:
	Nome do Funcionário: Maria do Carmo
	Salário: 1850,45
	O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[100];
	float salary;
	
	printf("Informe o nome do funcionário: ");
	scanf("%[^\n]", name);
	
	printf("Informe o salário referente ao funcionário %s: ", name);
	scanf("%f", &salary);
	
	printf("O funcionário %s tem um salário de R$%.2f em Junho.", name, salary);
	
	return 0;
}

