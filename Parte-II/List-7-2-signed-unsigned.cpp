/** @copyright (C) Andre Duarte Bueno @file List-7-2-signed-unsigned.cpp */

#include <iostream>

int main ()
{
  {
    std::cout << "---------->Testando a utilização de int" << std::endl;

    int x, y, z;

    std::cout << "Entre com int x (ex: 300): ";
    std::cin >> x;

    std::cout << "Entre com int y (ex: 500): ";
    std::cin >> y;
    std::cin.get ();

    z = x + y;
    std::cout << "int z = x + y = " << z << std::endl;

    z = x - y;
    std::cout << "int z = x - y = " << z << std::endl;
  }

  std::cout << "---------->Testando a utilização de unsigned int" << std::endl;

  unsigned int x, y, z;
  std::cout << "Entre com unsigned int x (ex: 300): ";
  std::cin >> x;

  std::cout << "Entre com unsigned int y (ex: 500): ";
  std::cin >> y;
  std::cin.get ();

  z = x + y;

  std::cout << "unsigned int z = x + y = " << z << std::endl;
  z = x - y;

  std::cout << "unsigned int z = x - y = " << z << std::endl;

  // Se x > y retorna z = x - y, se x <= y retorna z = y - x
  if (x > y)
    z = x - y;
  else
    z = y - x;

  // Armazena a informação do sinal, observe que sinal é do tipo int.
  int sinal;
  if (x > y)
    sinal = +1;
  else
    sinal = -1;

  // Cria objeto int para armazenar o resultado 
  int resultado_correto = sinal * z;

  std::cout << "z = |x - y| = " << z << std::endl;
  std::cout << "sinal de x - y = " << sinal << std::endl;
  std::cout << "int resultado_correto = sinal * z = " << resultado_correto   << std::endl;

  unsigned int t = -1;
  std::cout << " unsigned int t = -1 --> t = " << t << std::endl;

  return 0;
}
