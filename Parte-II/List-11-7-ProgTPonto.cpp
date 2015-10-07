/** @copyright (C) Andre Duarte Bueno @file List-11-7-ProgTPonto.cpp */

#include <iostream>

#include "List-11-5-TPonto.h"

using namespace std;

// Exemplo de criação e uso do objeto TPonto
int main ()
{
  int x = 5;
  int y = 4;
  {
    TPonto ponto;		// Cria objeto do tipo TPonto com nome ponto
    ponto.Set (x, y);		// Chama método Set do objeto ponto
    ponto.Desenha ();
  }				// Sai de escopo e detrói o objeto ponto

  // Chama método estático e público, 
  // observe que não precisa de um objeto
  cout << "Contador = " << TPonto::GetContador () << endl;
  return 0;
}
