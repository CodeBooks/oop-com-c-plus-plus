/** @copyright (C) Andre Duarte Bueno @file List-22-1-excecoes1.cpp */

#include <iostream>

using namespace std;

int main ()
{
  // Uma divisão por zero sem controle de erro
  float a = 3.0;
  float b = 0.0;
  float c = a / b;
  float d = c;

  cout << "a=" << a << " b=" << b << " c = a / b =" << c << " d =" << d <<    endl;
  return 0;
}
