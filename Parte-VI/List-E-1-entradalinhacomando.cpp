/** @copyright (C) Andre Duarte Bueno @file List-E-1-entradalinhacomando.cpp*/
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  cout << "argc=" << argc << endl;

  int cont = argc;
  while (cont--)
    cout << "argv[" << cont << "]=" << argv[cont] << endl;

  return 0;
}
