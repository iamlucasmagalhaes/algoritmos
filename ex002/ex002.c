/*
	2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-vindas para ela:
	Ex:
	Qual é o seu nome? João da Silva
	Olá João da Silva, é um prazer te conhecer!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[100]; //array que vai guardar o nome da pessoa
	
	printf("Olá, qual é o seu nome? ");
	scanf("%[^\n]", name); //%[^\n] serve para lê a linha inteira incluindo os espaços em branco
	
	printf("Olá %s, é um prazer te conhecer!",name);
	return 0;
}
