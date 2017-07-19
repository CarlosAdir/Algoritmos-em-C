/*
	Codigo: Double
	 Autor:	Carlos Adir
 Descrição: Mostra leitura, escrita e operações com o tipo double

*/

#include <stdio.h>

int main()
{
	double n1 = 3.2, n2 = 1.5; /* Declaracao de um double */
	printf("Digite o primeiro numero: ");
	scanf("%lf", &n1); /* Leitura de um double */
	printf("Digite o segundo numero: ");
	scanf("%lf", &n2); /* Leitura de outro double */
	printf("Soma = %lf\n", n1+n2); /* Soma e impressão de double */
	printf("Subt = %lf\n", n1-n2); /* Subtracao e impressão de double */
	printf("Mult = %lf\n", n1*n2); /* Multiplicacao e impressão de double */
	printf("Divi = %lf\n", n1/n2); /* Divisao e impressão de double */
	
	return 0;
}
