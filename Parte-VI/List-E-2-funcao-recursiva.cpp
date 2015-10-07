/** @copyright (C) Andre Duarte Bueno @file List-E-2-funcao-recursiva.cpp */

#include <iostream>
#include <iomanip>

using namespace std;

long int fatorial (long int);	// Declaração da função

int main ()
{
  long int min;

  cout << "Entre com o valor mínimo (min) : ";
  cin >> min;
  long int max;

  cout << "Entre com o valor máximo (max) : ";
  cin >> max;
  cin.get ();			//pega o enter

  for (long int i = min; i <= max; i++)
    cout << setw (2) << i << "! = " << fatorial (i) << endl;

  return 0;
}

// Definição da função (lembre-se, fatorial 5 = 5*4*3*2*1)
long int fatorial (long int n)
{
  if (n <= 1)			// Se for menor ou igual a 1 retorna 1 (finaliza)
    return 1;
  else				// Se for >1 chama função fatorial novamente (recursão)
    return n * fatorial (n - 1);
}
