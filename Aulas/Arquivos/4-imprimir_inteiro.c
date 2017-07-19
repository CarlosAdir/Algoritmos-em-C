/*
	Codigo: Imprimir inteiro
	 Autor:	Carlos Adir
 Descrição: Este arquivo mostra a maneira de imprimir um inteiro utilizando o printf com %d


*/


#include <stdio.h>

int main()
{
	/* Declarando o inteiro */
	int PrimeiroNumero = 1;
	/* Imprimindo o inteiro */
	printf("O valor armazenado e: %d\n", PrimeiroNumero);
	/* Trocando o valor do numero */
	PrimeiroNumero = 3;
	/* Imprimindo novamente */
	printf("O valor armazenado e: %d\n", PrimeiroNumero);
	return 0;
}
