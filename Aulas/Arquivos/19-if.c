/*
	Codigo : 19-if.c
	Autor : Carlos Adir
	Descricao : Algoritmo para exemplificar o if
*/
# include < stdio .h >
int main ()
{
	char resposta;
	printf ( " Voce quer de cafe ? " ) ;
	scanf ( "%c" , &resposta ) ;
	if ( resposta == 's')
	printf ( " Aqui esta seu cafe .\n") ;
	return 0;
}