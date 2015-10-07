/** @copyright (C) Andre Duarte Bueno @file List-24-2-Entrada-Saida-iomanip.cpp*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  int i = 16;

  double d = 1.2345678901234567890;

  char c = 'c';

  cout << "-->Definindo a largura do campo" << endl;
  cout << setw (5) << i << endl;

  cout << "-->Definindo a precisão da saída" << endl;
  for (int cont = 1; cont <= 10; cont++)
    cout << "Precisão =" << setw (2) << cont << setprecision (cont)
	 << " d=" << d << endl;

  cout << "-->Definindo o caractere de preenchimento" << endl;
  cout << setw (10) << setfill ('*') << i << endl;

  cout << "-->Definindo formato do número (hexadecimal, octal e decimal)" <<    endl;
  cout << "hex 15 =" << hex << 15 << endl;
  cout << "oct 15 =" << oct << 15 << endl;
  cout << "dec 15 =" << dec << 15 << endl;
  cout << "base 10=" << setbase (10) << 15 << endl;

  return 0;
}
