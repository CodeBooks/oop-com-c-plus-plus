/** @copyright (C) Andre Duarte Bueno @file List-20-1-associacoes.cpp */

#include <iostream>

using namespace std;

class Associacao;

class A
{
  int a;
  
public:
  
  Associacao * ptr_associacao;
  friend class Associacao;
};

class B
{
  int b;
  
public:
  
  Associacao * ptr_associacao;

  friend class Associacao;
};

class Associacao
{

  int atributoAssociacao;

  A *ptr_A;
  
  B *ptr_B;

public:

  Associacao ():atributoAssociacao (0), ptr_A (0), ptr_B (0)
  {
  };

  int GetatributoAssociacao ()
  {
    return atributoAssociacao;
  };

  friend class A;
  friend class B;
};

int main ()
{
  B b;
  Associacao associacao;

  b.ptr_associacao = &associacao;

  cout << "b.ptr_associacao->GetatributoAssociacao()="
       << b.ptr_associacao->GetatributoAssociacao () << endl;

  return 0;
}
