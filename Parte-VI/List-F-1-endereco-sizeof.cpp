/** @copyright (C) Andre Duarte Bueno @file List-F-1-endereco-sizeof.cpp */

#include <iostream>

using namespace std;

int main ()
{
  char nome[] = "nucleo de pesquisa em construcao";
  cout << "char nome[]=\"nucleo de pesquisa em construcao\"";
  cout << "\n nome = " << nome;
  cout << "\n *nome = " << *nome;
  cout << "\n &nome = " << &nome;
  cout << "\n (int) nome = " << (int) nome;
  cout << "\n (int) *nome = " << (int) *nome;
  cout << "\n (int) &nome = " << (int) &nome;
  cout << "\n nome = " << nome;
  cout << "\n sizeof(nome) = " << sizeof (nome);
  cout << "\n sizeof(&nome) = " << sizeof (&nome);
  cout << "\n sizeof(&nome[0]) = " << sizeof (&nome[0]);

  return 0;
}
