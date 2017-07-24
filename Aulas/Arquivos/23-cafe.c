/*   Codigo: 23-cafe.c
      Autor: Carlos Adir
  Descricao: 
*/
#include <stdio.h>
int main()
{
	char resposta ;
	printf ( " Voce quer cafe ? " ) ;
	scanf ( " % c " , & resposta ) ;
	getchar () ;
	while ( resposta != 's')
	{
		printf ( " Voce quer cafe ? " ) ;
		scanf ( " % c " , & resposta ) ;
		getchar () ;
	}
	printf ( "Que bom ! Seu cafe esta aqui !\n " ) ;
	return 0;
}
  