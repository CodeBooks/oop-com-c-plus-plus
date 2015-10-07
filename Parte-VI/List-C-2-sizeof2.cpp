/** @copyright (C) Andre Duarte Bueno @file List-C-2-sizeof2.cpp */

#include <iostream>
#include <iomanip>
#include <complex>

using namespace std;

int main ()
{
  char c;
  short s;
  int i;
  long l;
  float f;
  double d;
  long double ld;
  complex < float >cf;
  complex < double >cd;
  complex < long double >cld;

  // Uso do operador sizeof para os diferentes tipos padrões de C++
  cout << "sizeof(char)	= " << sizeof (char) << endl;
  cout << "sizeof(short)	= " << sizeof (short) << endl;
  cout << "sizeof(int)	= " << sizeof (int) << endl;
  cout << "sizeof(long	= " << sizeof (long) << endl;
  cout << "sizeof(float)	= " << sizeof (float) << endl;
  cout << "sizeof(double) = " << sizeof (double) << endl;
  cout << "sizeof(long double) = " << sizeof (long double) << endl;

  // Uso do operador sizeof para os tipos complexos
  cout << "sizeof cf	= " << sizeof cf << endl;
  cout << "sizeof cd	= " << sizeof cd << endl;
  cout << "sizeof cld	= " << sizeof cld << endl;
  return 0;
}
