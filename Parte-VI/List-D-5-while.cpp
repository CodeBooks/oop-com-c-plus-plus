/** @copyright (C) Andre Duarte Bueno @file List-D-5-while.cpp */
#include <iostream>

using namespace std;

int main ()
{
  int x, y;
  cout << "Entre com a base (inteiro): ";
  cin >> x;

  cout << "Entre com o expoente (inteiro): ";
  cin >> y;
  cin.get ();

  int i = 1;
  double potencia = 1;
  while (i <= y)
    {
      potencia *= x;
      ++i;
    }
  cout << potencia << endl;

  return 0;
}
