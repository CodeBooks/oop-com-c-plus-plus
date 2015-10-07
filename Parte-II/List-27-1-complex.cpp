/** @copyright (C) Andre Duarte Bueno @file List-27-1-complex.cpp */

#include <iostream>
#include <complex>

using namespace std;

int main ()
{
  complex <double>a (1.2, 3.4);

  complex <double>b (-9.8, -7.6);

  cout << "a = " << a << ", b = " << b << endl;

  a += b;
  b /= sin (b) * cos (a);
  cout << "a = " << a << ", b = " << b << endl;

  b *= log (a) + pow (b, a);
  a -= a / b;
  cout << "a = " << a << ", b = " << b << endl;

  cout << "Entre com o complexo a(real,imag): ";
  cin >> a;  cin.get ();

  cout << "Conteúdo de a = " << a << endl;

  return 0;
}
