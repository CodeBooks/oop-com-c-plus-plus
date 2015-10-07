/** @copyright (C) Andre Duarte Bueno @file List-22-2-excecoes2.cpp */

#include <iostream>

using namespace std;

int main ()
{				// Uma divisão por zero com controle de erro
  float a = 3.0;
  float b;
  float c;

  cout << "Entre com b:";
  cin >> b;
  cin.get ();

  if ( b == 0 )			// controle
    cout << "Erro b = 0" << endl;
  else
    {
      c = a / b;
      cout << "c = a / b = " << c << endl;
    }

  return 0;
}
