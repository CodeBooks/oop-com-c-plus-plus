/** @copyright (C) Andre Duarte Bueno @file List-G-2-union.cpp */

#include <iostream>

using namespace std;

int main ()
{
  union Nome_union
  {
    double raioHidraulico;
    double condutancia;
  };

  Nome_union obj;
  obj.raioHidraulico = 3.0;
  cout << "raioHidraulico = " << obj.raioHidraulico << '\t';
  cout << "condutancia = " << obj.condutancia << endl;

  obj.condutancia = 5.0;
  cout << "raioHidraulico = " << obj.raioHidraulico << '\t';
  cout << "condutancia = " << obj.condutancia << endl;

  return 0;
}
