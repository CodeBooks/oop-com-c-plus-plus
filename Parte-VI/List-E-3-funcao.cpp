/** @copyright (C) Andre Duarte Bueno @file List-E-3-funcao.cpp */

#include <iostream>

using namespace std;

int cubo (int y);		// Declaração da função

int main ()
{
  int min, max;
  cout << "Entre com o intervalo (valor mínimo e máximo)(ex: 3 e 10):";
  cin >> min >> max;
  cin.get ();
  for (int x = min; x <= max; x++)
    cout << "cubo de (" << x << ") = " << cubo (x) << endl;
  return 0;
}

// Definição da função: 
// retorno_da_função Nome_da_função (parâmetros) {corpo_da_função}
int cubo (int y)
{
  return y * y * y;
}
