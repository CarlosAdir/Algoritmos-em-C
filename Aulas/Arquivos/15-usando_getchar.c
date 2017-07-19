/*   Codigo: 15-usando_getchar.c
      Autor: Carlos Adir
  Descricao: 
*/
#include <stdio.h>
int main()
{
  char c;
  printf("Digite um caracter: ");
  scanf("%c", &c);
  printf("Primeiro caracter lido: '%c'\n", c1);
  getchar(); /* Retirando o '\n' do buffer */
  printf("Digite outro caracter: ");
  scanf("%c", &c);
  printf("O outro caracter lido: %c", c);
  return 0;
}
  