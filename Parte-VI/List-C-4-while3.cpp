/** @copyright (C) Andre Duarte Bueno @file List-C-4-while3.cpp */
#include <iostream>
using std::cout;
using std::endl;

int main ()
{
  int contador = 1;
  // % é o operador módulo, retorna o resto da divisão. Assim 5%4 retorna 1

  cout << "5%4 = " << (5 % 4) << endl;
  int x = 5;
  int y = 3;
  int z = x > y ? x : y;
  cout << "\nx = 5, y = 3, z = x > y ? x : y ;" << endl;
  cout << "z = " << z << endl;

  return 0;
}
