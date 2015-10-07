/** @copyright (C) Andre Duarte Bueno @file List-8-1-namespace.cpp */

#include <iostream>

int x = 3;			// Objeto x global

namespace teste			// Cria um bloco namespace com o nome teste
{
  const int x = 7;		// Objeto x do namespace
  void Print ();		// Função Print do namespace

  namespace teste2		// namespace teste2 dentro de teste
  {
    int y = 4;
  }
}

int main ()			// Função main
{
  std::cout << x << std::endl;	// Utiliza x global
  std::cout << teste::x << std::endl;	// Utiliza x do namespace teste
  std::cout << teste::teste2::y << std::endl;
  teste::Print ();		// chama função do namespace

  return 0;
}

// Definição da função Print do namespace teste
void teste::Print ()
{
  std::cout << "\nfunção print do namespace" << std::endl;
  std::cout << x << std::endl;	// x do namespace
  std::cout <<::x << std::endl;	// x global
  std::cout << teste2::y << std::endl;
}
