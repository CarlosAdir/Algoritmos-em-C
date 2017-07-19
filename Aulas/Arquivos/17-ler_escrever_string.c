/*   Codigo: 17-ler_escrever_string.c
      Autor: Carlos Adir
  Descricao: 
*/
#include <stdio.h>
int main()
{
  char palavra[100];
  printf("Digite seu nome: ");
  scanf("%s", palavra);
  printf("Ola %s, seja bem vindo!", palavra);
  return 0;
}
  