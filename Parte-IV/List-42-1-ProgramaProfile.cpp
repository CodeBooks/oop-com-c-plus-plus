/** @copyright (C) Andre Duarte Bueno  @file  List-42-1-ProgramaProfile.cpp */

#include <iostream>
#include <functional>
#include <deque>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

//1) Declaração e definição da função Fatorial_Recursiva
long int  Fatorial_Recursiva(  long int n )
{
  //se for menor ou igual a 1 retorna 1 (finaliza)
  if ( n <= 1 )
    return 1;
  
  //se for >1 chama função fatorial novamente (recursão)
  else
    return n * Fatorial_Recursiva( n - 1 );
}

//2) Declaração e definição da função  Fatorial_for
long int  Fatorial_for(  long int n )
{
  //se for menor ou igual a 1 retorna 1 (finaliza)
  if ( n <= 1 )
    return 1;
  
  long int fatorial = 2;
  for( long int  i = 3; i <= n; i++ )
    fatorial *= i;
  return fatorial;
}

//3) Template de um objeto unary_function
template<class Arg>
class TObjetoFuncaoFatorial : public unary_function<Arg, Arg>
{ 
public:
  //Definição do operador (), determina o fatorial de um número arg
  Arg operator()(const Arg& arg)
  {                 // desconsiderei o if(n<1)
    Arg fatorial = 2;  
    for( Arg i = 3; i <= arg; i++ )
      fatorial *= i;
    return fatorial;
  }
};

int main()
{ 
  char resp;
  TObjetoFuncaoFatorial<long int>  objeto_funcao;
  
  for( long int  i = 1; i <= 5000; i++ )
    {
      objeto_funcao( i );
      Fatorial_Recursiva( i );
      Fatorial_for ( i );
    } 

  return 0; 
}
