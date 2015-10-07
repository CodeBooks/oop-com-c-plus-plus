/** @copyright (C) Andre Duarte Bueno @file List-22-3-excecoes3.cpp */

#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main ()					// Uma divisão por zero com tratamento de exceções
{
  float a = 3.0;
  float b;
  float c;

  try
    {
      cout << "Entre com b:";
      cin >> b;
      cin.get ();

      if (b == 0)
	throw string ("Divisão por zero");	// out_of_range;

      c = a / b;
      cout << "c = a / b = " << c << endl;
    }

  catch (string msg)
    {
      cout << "Exceção: " << msg << endl;
    }
  return 0;
}
