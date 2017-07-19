/*   Codigo: 18-ler_escrever_nome_composto.c
      Autor: Carlos Adir
  Descricao: 
*/
#include <stdio.h>
int main()
{
  char palavra[100];
  printf("Digite seu nome: ");
  scanf("%[^\n]", palavra);
  printf("Ola %s, seja bem vindo!", palavra);
  return 0;
}
  