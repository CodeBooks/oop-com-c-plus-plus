/** @copyright (C) Andre Duarte Bueno @file List-18-2-friend-metodo.cpp */

#include <iostream>

class C;			// Somente declara a classe C

class B				// Declaração da classe B
{

private:int b;

public:

  // Método da classe B que recebe um objeto do tipo C.
  void fB (C & obj_c);

};

class C
{

private:int c;

  // O método fB é amigo, pode acessar os atributos de C
  friend void B::fB (C & obj_c);

};

void B::fB (C & obj_c)
{
  b = obj_c.c;
}

int main ()
{

  std::cout << "Criando objetos B obj_b; C obj_c;" << std::endl;

  B obj_b;
  C obj_c;
  obj_b.fB (obj_c);

  return 0;
}
