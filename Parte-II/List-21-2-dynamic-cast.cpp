/** @copyright (C) Andre Duarte Bueno @file List-21-2-dynamic-cast.cpp */
// Extraído do HELP do Borland C++ 5.0 e adaptado

#include <iostream>

#include <typeinfo>

using namespace std;

class Base1
{
  virtual void f ()  {  };
};				// Base1

class Base2{};			// Base2

class Derivada:public Base1, public Base2
{
};				// Derivada

int main ()
{

      Derivada d;		// Cria objeto d
      Derivada *pd = 0;		// Ponteiro para Derivada
      Base1 *b1 = &d;		// Ponteiro para Base1, aponta para objeto d

      cout << "Realiza um cast dinâmico (downcast) de Base1 para Derivada." <<	endl;

      if ((pd = dynamic_cast < Derivada * >(b1)) != 0)
	{
	  cout << "Tipo do ponteiro resultante =  " << typeid (pd).name () << endl;
	}
      
      /* Fique atento a hierarquia da classe. Cast de uma classe B1 para D e depois de D para B2 */
      Base2 *b2 = 0;
      cout << "Realiza um cast dinâmico (downcast) de  Base1 para Base2." <<
	endl;
      if ((b2 = dynamic_cast < Base2 * >(b1)) != 0)
	{
	  cout << "Tipo do ponteiro resultante = " << typeid (b2).name () << endl;
	}

  return 0;
}
