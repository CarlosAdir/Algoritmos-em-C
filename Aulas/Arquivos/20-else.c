/*
	Codigo : 20-else.c
	Autor : Carlos Adir
	Descricao : Algoritmo para exemplificar o else
*/
# include < stdio .h >
int main ()
{
	char resposta ;
	printf("Voce quer de cafe?");
	scanf("%c", &resposta);
	if(resposta == ’s ’)
		printf("Aqui esta seu cafe.\n");
	else
		printf("Aceita leite?\n");
	return 0;
}