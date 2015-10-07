#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Dados dois argumentos inteiros, a e b, imprime a soma. */
void MinhaProcSoma( int a, int b)
{
  int c;
  c = a + b;
  printf("\n a + b = %d \n", c);
}
/* Dado dois argumentos inteiros, a e b, retorna o maior valor */
int MinhaFuncMaiorValor( int a, int b)
{
  if ( a >= b)
    return a;
  else
   return b;
}

