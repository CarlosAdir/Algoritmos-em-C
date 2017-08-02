/*
	Codigo : 21-elseif.c
	Autor : Carlos Adir
	Descricao : Algoritmo para exemplificar o else if
*/
#include <stdio.h>
int main ()
{
	char resposta;
	printf("Qual o resto de 7 por 3? ");
	scanf("%c", &resposta);
	if(resposta == '0')
		printf("Errado!.\n");
	else if(resposta == '1')
		printf("Correto!\n");
	else if(resposta == '2')
		printf("Errado!\n");
	else
		printf("Voce nao entendeu a pergunta!\n");
	
	return 0;
}