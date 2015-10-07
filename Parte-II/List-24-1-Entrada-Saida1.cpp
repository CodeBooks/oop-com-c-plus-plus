/** @copyright (C) Andre Duarte Bueno @file List-24-1-Entrada-Saida1.cpp */
#include <iostream>

using namespace std;

int main ()
{
  int i = 16;

  double d = 1.12345678901234567890;

  char c = 'c';

  cout << "-->Mostrando números em ponto flutuante" << endl;

  cout.unsetf (ios::showpoint);

  cout << "Sem shownpoint 3.33000=" << 3.33000 << endl;
  cout.setf (ios::showpoint);

  cout << "Com shownpoint 3.33000=" << 3.33000 << endl;

  cout << "-->Definindo a largura do campo" << endl;
  cout.width (5);
  cout << i << endl;

  cout << "-->Definindo a precisão da saída" << endl;
  for (int i = 1; i <= 5; i++)
    {
      cout << "Precisão =";
      cout.width (2);
      cout << i;
      cout.precision (i);
      cout << " d=" << d << endl;
    }

  cout << "-->Definindo o caractere de preenchimento" << endl;
  cout.fill ('*');
  cout.width (10);
  cout << i << endl;

  return 0;
}
