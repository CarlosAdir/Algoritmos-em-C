/*   Codigo: 24-cafe2.c
      Autor: Carlos Adir
  Descricao: 
*/
#include <stdio.h>
int main()
{
	char resposta ;
	do
	{
		printf ( " Voce quer cafe ? " ) ;
		scanf ( " % c " , & resposta ) ;
		getchar () ;
	}while ( resposta != 's');
	printf ( "Que bom ! Seu cafe esta aqui !\n " ) ;
	return 0;
}
  