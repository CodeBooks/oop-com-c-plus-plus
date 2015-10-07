/** @copyright (C) Andre Duarte Bueno @file List-C-3-incremento.cpp */

#include <iostream>

using namespace std;

int main ()
{
  int contador = 0;
  cout << contador << endl;	// Escreve 0 na tela
  cout << (contador++) << endl;	// Escreve 0 e depois faz contador=1
  cout << contador << endl;	// Escreve 1
  contador = 0;
  cout << contador << endl;	// Escreve 0
  cout << (++contador) << endl;	// Incrementa contador e escreve na tela
  cout << contador << endl;	// Escreve 1

  return 0;
}
