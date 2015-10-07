/** @copyright (C) Andre Duarte Bueno @file List-22-5-excecoes5.cpp */

#include <iostream>
#include <new>
#include <vector>

using namespace std;

// Define uma estrutura, veja seção 6.1
struct S
{
  int indicador[5000];
  double valor[5000];
};

int main ()
{
  vector < S > v;

  try				// Uso de try
    {
      long int i = 0;

      for (;;)			// Um for infinito
	{
	  S *ptr_s = new S ();
	  v.push_back (*ptr_s);
	  cout << "\nv[" << i << "] alocada" << endl;
	  i++;
	}
    }
  catch (bad_alloc erro)
    {
      cout << "\nExceção " << erro.what () << endl;
    }
}
