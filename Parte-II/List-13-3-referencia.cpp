/** @copyright (C) Andre Duarte Bueno @file List-13-3-referencia.cpp */

#include <iostream>

using namespace std;

int main ()
{
  int x = 3;		// tipo=int, nome=x, valor=3

  int &ref = x;		// tipo=referência para inteiro, nome=ref, valor=x

  // Daqui para frente, ref é a mesma coisa que x.
  cout << "Valor de x = " << x << "\tValor da ref = " << ref << endl;
  ref = 156;

  cout << "Mudou ref " << endl;

  cout << "Valor de x = " << x << "\tValor da ref = " << ref << endl;
  x = 6;

  cout << "Mudou x " << endl;

  cout << "Valor de x = " << x << "\tValor da ref = " << ref << endl;

  return 0;
}
