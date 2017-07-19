/*   Codigo: 14-dois_char.c
      Autor: Carlos Adir
  Descricao: 
*/
#include <stdio.h>
int main()
{
  char c1, c2;
  printf("Digite dois caracteres: ");
  scanf("%c", &c1);
  printf("Primeiro caracter lido: '%c'\n", c1);
  printf("Digite o outro caracter: ");
  scanf("%c", &c2);
  printf("Segundo caracter lido: '%c'\n", c2);
  printf("Os dois caracteres lidos foram: '%c' e '%c'\n", c1, c2);
  return 0;
}
  